import Mathlib.Algebra.BigOperators.Basic
import Mathlib.Algebra.BigOperators.Intervals
import Mathlib.Data.Num.Lemmas
import Mathlib.Tactic.Ring
import Mathlib.Tactic.FieldSimp
import Mathlib.Data.Finset.Basic
import Mathlib.Data.Nat.Interval
import Mathlib.Order.LocallyFinite
import Mathlib.Algebra.Order.Monoid.NatCast
import Mathlib.Data.Nat.PartENat
import Mathlib.Data.Real.Basic

import Mathlib.Order.Basic
import Mathlib.Data.Nat.Order.Basic
import Mathlib.Data.Nat.Basic
import Mathlib.Topology.ContinuousFunction.Basic
import Init.Core
import Mathlib.MeasureTheory.Integral.SetIntegral
import Mathlib.Data.Set.Intervals.Basic
import Mathlib.Data.Real.ENNReal
import Mathlib.MeasureTheory.Measure.Haar.OfBasis
import Mathlib.Topology.UnitInterval
import Mathlib.Topology.Basic

open Num

open BigOperators
open Topology
open ENNReal
open Finset
open Nat
open NatCast
open Function
open MeasureTheory

-- #eval do 
--   let res := ((Nat.zero + 1) ^ (3: ℕ) : ℚ) / 3
--   IO.println (res)


-- #lookup3 tendsto

-- #print (Set.Icc 0 1)
-- #print C
-- #check C
-- #synth C


-- -------------
-- Auf dem Raum der stetigen Funktionen C([0,1]) ist durch ∥f∥L1 = R1|f(x)|dx eine Normdefiniert. 
-- (Dies brauchen Sie nicht zu zeigen.) Zeigen Sie, dass eine Funktionenfolge (fn) in C([0, 1]), 
-- die gleichma ̈ßig gegen f konvergiert, auch bezu ̈glich der Norm ∥ · ∥L1 gegen f konvergiert.

abbrev C := ContinuousMap unitInterval ℝ 

noncomputable
def L1_norm (f : C) : ℝ := ∫ x: unitInterval, |f x|

-- Define the L1 space
def L1 := {f : C | L1_norm f ≥ 0 }

-- Define the uniform convergence
def uniform_convergent (f : ℕ → C) (limit : C) := ∀ ε : ℝ, ε > 0 → ∃ N : ℕ, ∀ n : ℕ, n ≥ N → ∀ x : unitInterval, x ∈ Set.Icc 0 1 → |(f n) x - limit x| < ε

-- Theorem: If (fn) converges uniformly to f, then it also converges in L1 norm to f.
theorem uniform_convergence_implies_L1_convergence (f : ℕ → C) (limit : C) (h_uniform : uniform_convergent f limit) :
  Filter.Tendsto (λ n => L1_norm (f n)) ⊤ (𝓝 (L1_norm limit)) := by
    -- We need to show that the L1 norms converge to the L1 norm of the limit
    rw metric.tendsto_at_top,
    intros ε ε_pos,
    -- Use the uniform convergence property to find N
    obtain ⟨N, hN⟩ := h_uniform ε ε_pos,
    use N,
    intros n hn,
    -- Use the definition of the L1 norm
    unfold L1_norm,
    have h₁ : ∀ x ∈ Icc (0 : ℝ) 1, |(f n - limit) x| ≤ ε,
    {
      intros x hx,
      specialize hN n hn x hx,
      exact le_of_lt (hN hx),
    },
    -- Apply the Lebesgue Dominated Convergence Theorem
    exact integral_le_integral_of_le (continuous_map.abs_sub_integral_le _ _ h₁),

-- -------------


-- Same exercice as the one below but with explicit n ≥ 1 condition, which makes it much more readable 
example (n : ℕ) (h: n ≥ 1): ∑ k in Finset.Ico 1 n, ((k - 1 : ℚ) ^ 2) < ((n ^ (3: ℕ) : ℚ) / 3 : ℚ) := by
  cases' h
  case refl =>
    simp
  case step n h =>
    induction n, h using le_induction with 
    | base =>
      simp
      norm_num
    | succ n h ih =>
      rw[← succ_eq_add_one]
      have succ_zero_le_succ_one: 1 ≤ Nat.succ (n) := by
        apply succ_le_succ (Nat.zero_le n)
      rw[Finset.sum_Ico_succ_top (succ_zero_le_succ_one ..)]
      
      have := _root_.add_lt_add_right ih (((Nat.succ n : ℚ) - 1) ^ 2)
      apply this.trans_le

      field_simp
      rw[div_le_div_iff (by norm_num) (by norm_num)]
      ring_nf
      apply add_le_add_right
      apply add_le_add_right
      apply _root_.add_le_add
      · norm_num
      · norm_cast
        apply mul_le_mul rfl.le (by decide)
        norm_num
        apply Nat.zero_le  

-- same one as the one below but solved differently
example (n : ℕ) : ∑ k in Finset.Ico 0 n.succ, (((k + 1 : ℚ) - 1 )^2) < (((n + 1) ^ (3: ℕ) : ℚ) / 3 : ℚ) := by
  induction n with
  | zero =>
    simp
  | succ n ih =>
    rw[Finset.sum_Ico_succ_top (Nat.zero_le ..)]
    rw[← succ_eq_add_one]
    case succ =>
      calc
        ∑ k in Ico 0 n.succ, ((k + 1 : ℚ) - 1) ^ 2 + ((Nat.succ n : ℚ) + 1 - 1) ^ 2
        _ < ↑((n + 1) ^ 3) / 3 + ((Nat.succ n : ℚ) + 1 - 1) ^ 2 := add_lt_add_right ih _
      field_simp
      rw[div_lt_div_iff (by norm_num) (by norm_num)]
      ring_nf
      apply add_lt_add_right
      apply add_lt_add_right
      norm_cast
      linarith

example (n : ℕ): ∑ k in Finset.Ico 0 n.succ, (((k + 1 : ℚ) - 1 )^2) < (((n + 1) ^ (3: ℕ) : ℚ) / 3 : ℚ) := by
  induction n with
  | zero =>
    simp
  | succ n ih =>
    rw[Finset.sum_Ico_succ_top (Nat.zero_le ..)]
    rw[← Nat.succ_eq_add_one]
    have := _root_.add_lt_add_right ih (((Nat.succ n : ℚ) + 1 - 1) ^ 2)
    apply this.trans_le
    field_simp
    apply div_le_div ?_ ?_ zero_lt_three rfl.le
    · positivity
    · ring_nf
      apply add_le_add_right
      apply add_le_add_right
      apply _root_.add_le_add
      · norm_num
      · norm_cast
        apply Nat.mul_le_mul rfl.le (by decide)

example (n : Nat): ∑ k in range (n+1), (k ^ (2 : ℕ) : ℚ) = (n*(n+1)*(2*n+1)) / 6 := by
  induction n with
  | zero =>
    simp
  | succ n ih =>
    rw[sum_range_succ]
    rw[ih]
    rw[succ_eq_add_one]
    field_simp
    ring_nf

example (n : Nat): ∑ k in range (n+1), k = n*(n+1) / 2 := by
  rw[Nat.div_eq_of_eq_mul_left (by norm_num)]
  symm
  induction n with
  | zero =>
    simp
  | succ n ih =>
    rw[sum_range_succ]
    rw[right_distrib]
    rw[ih]
    rw[succ_eq_add_one]
    ring

-- -- def main (args : List String) : IO Unit :=
-- --  IO.println s!"All theorems in this file are true."

