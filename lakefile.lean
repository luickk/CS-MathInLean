import Lake
open Lake DSL

package testNat

require mathlib from git
  "https://github.com/leanprover-community/mathlib4.git"

@[default_target]
lean_exe testNat {
  root := `Main
}

