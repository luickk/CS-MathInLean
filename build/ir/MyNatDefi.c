// Lean compiler output
// Module: MyNatDefi
// Imports: Init Mathlib.Tactic.Basic Mathlib.Tactic.Cases
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
static lean_object* l_one___closed__1;
LEAN_EXPORT lean_object* l_instInhabitedMyNat;
LEAN_EXPORT lean_object* l_myNatFromNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_instAddMyNat;
static lean_object* l_instAddMyNat___closed__1;
LEAN_EXPORT lean_object* l___private_MyNatDefi_0__decEqMyNat____x40_MyNatDefi___hyg_99____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOfNatMyNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l___private_MyNatDefi_0__beqMyNat____x40_MyNatDefi___hyg_15_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instOfNatMyNat(lean_object*);
LEAN_EXPORT lean_object* l_MyNat_add___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_natFromMyNat(lean_object*);
LEAN_EXPORT lean_object* l_instToStringMyNat(lean_object*);
LEAN_EXPORT lean_object* l_instMulMyNat;
static lean_object* l_instMulMyNat___closed__1;
LEAN_EXPORT lean_object* l___private_MyNatDefi_0__beqMyNat____x40_MyNatDefi___hyg_15____boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MyNat_mul___boxed(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_MyNat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_one;
static lean_object* l_instBEqMyNat___closed__1;
LEAN_EXPORT lean_object* l_natFromMyNat___boxed(lean_object*);
LEAN_EXPORT lean_object* l_MyNat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instInhabitedMyNat__1;
lean_object* lean_nat_sub(lean_object*, lean_object*);
static lean_object* l_MyNat_mul___closed__1;
LEAN_EXPORT uint8_t l___private_MyNatDefi_0__decEqMyNat____x40_MyNatDefi___hyg_99_(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instToStringMyNat___boxed(lean_object*);
LEAN_EXPORT uint8_t l_instDecidableEqMyNat(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_instDecidableEqMyNat___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* l_myNatFromNat(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* l_Nat_repr(lean_object*);
LEAN_EXPORT lean_object* l_instBEqMyNat;
LEAN_EXPORT uint8_t l___private_MyNatDefi_0__beqMyNat____x40_MyNatDefi___hyg_15_(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_1 = x_6;
x_2 = x_7;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_MyNatDefi_0__beqMyNat____x40_MyNatDefi___hyg_15____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_MyNatDefi_0__beqMyNat____x40_MyNatDefi___hyg_15_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_instBEqMyNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l___private_MyNatDefi_0__beqMyNat____x40_MyNatDefi___hyg_15____boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instBEqMyNat() {
_start:
{
lean_object* x_1; 
x_1 = l_instBEqMyNat___closed__1;
return x_1;
}
}
LEAN_EXPORT uint8_t l___private_MyNatDefi_0__decEqMyNat____x40_MyNatDefi___hyg_99_(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
else
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_5; 
x_5 = 0;
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_2, 0);
x_1 = x_6;
x_2 = x_7;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* l___private_MyNatDefi_0__decEqMyNat____x40_MyNatDefi___hyg_99____boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l___private_MyNatDefi_0__decEqMyNat____x40_MyNatDefi___hyg_99_(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t l_instDecidableEqMyNat(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = l___private_MyNatDefi_0__decEqMyNat____x40_MyNatDefi___hyg_99_(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instDecidableEqMyNat___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = l_instDecidableEqMyNat(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
static lean_object* _init_l_instInhabitedMyNat() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
static lean_object* _init_l_instInhabitedMyNat__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_box(0);
return x_1;
}
}
LEAN_EXPORT lean_object* l_myNatFromNat(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(0u);
x_3 = lean_nat_dec_eq(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_nat_sub(x_1, x_4);
x_6 = l_myNatFromNat(x_5);
lean_dec(x_5);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
else
{
lean_object* x_8; 
x_8 = lean_box(0);
return x_8;
}
}
}
LEAN_EXPORT lean_object* l_myNatFromNat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_myNatFromNat(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_natFromMyNat(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
else
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = l_natFromMyNat(x_3);
x_5 = lean_unsigned_to_nat(1u);
x_6 = lean_nat_add(x_4, x_5);
lean_dec(x_4);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_natFromMyNat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_natFromMyNat(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instOfNatMyNat(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_myNatFromNat(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instOfNatMyNat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instOfNatMyNat(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_instToStringMyNat(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_natFromMyNat(x_1);
x_3 = l_Nat_repr(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* l_instToStringMyNat___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_instToStringMyNat(x_1);
lean_dec(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MyNat_add(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_inc(x_1);
return x_1;
}
else
{
uint8_t x_3; 
x_3 = !lean_is_exclusive(x_2);
if (x_3 == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_MyNat_add(x_1, x_4);
lean_ctor_set(x_2, 0, x_5);
return x_2;
}
else
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_ctor_get(x_2, 0);
lean_inc(x_6);
lean_dec(x_2);
x_7 = l_MyNat_add(x_1, x_6);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
}
LEAN_EXPORT lean_object* l_MyNat_add___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MyNat_add(x_1, x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_instAddMyNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MyNat_add___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instAddMyNat() {
_start:
{
lean_object* x_1; 
x_1 = l_instAddMyNat___closed__1;
return x_1;
}
}
static lean_object* _init_l_MyNat_mul___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = l_myNatFromNat(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* l_MyNat_mul(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
x_3 = l_MyNat_mul___closed__1;
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_4 = lean_ctor_get(x_2, 0);
x_5 = l_MyNat_mul(x_1, x_4);
x_6 = l_MyNat_add(x_1, x_5);
return x_6;
}
}
}
LEAN_EXPORT lean_object* l_MyNat_mul___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = l_MyNat_mul(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
return x_3;
}
}
static lean_object* _init_l_instMulMyNat___closed__1() {
_start:
{
lean_object* x_1; 
x_1 = lean_alloc_closure((void*)(l_MyNat_mul___boxed), 2, 0);
return x_1;
}
}
static lean_object* _init_l_instMulMyNat() {
_start:
{
lean_object* x_1; 
x_1 = l_instMulMyNat___closed__1;
return x_1;
}
}
static lean_object* _init_l_one___closed__1() {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_MyNat_mul___closed__1;
x_2 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_l_one() {
_start:
{
lean_object* x_1; 
x_1 = l_one___closed__1;
return x_1;
}
}
lean_object* initialize_Init(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Basic(uint8_t builtin, lean_object*);
lean_object* initialize_Mathlib_Tactic_Cases(uint8_t builtin, lean_object*);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_MyNatDefi(uint8_t builtin, lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Basic(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Mathlib_Tactic_Cases(builtin, lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
l_instBEqMyNat___closed__1 = _init_l_instBEqMyNat___closed__1();
lean_mark_persistent(l_instBEqMyNat___closed__1);
l_instBEqMyNat = _init_l_instBEqMyNat();
lean_mark_persistent(l_instBEqMyNat);
l_instInhabitedMyNat = _init_l_instInhabitedMyNat();
lean_mark_persistent(l_instInhabitedMyNat);
l_instInhabitedMyNat__1 = _init_l_instInhabitedMyNat__1();
lean_mark_persistent(l_instInhabitedMyNat__1);
l_instAddMyNat___closed__1 = _init_l_instAddMyNat___closed__1();
lean_mark_persistent(l_instAddMyNat___closed__1);
l_instAddMyNat = _init_l_instAddMyNat();
lean_mark_persistent(l_instAddMyNat);
l_MyNat_mul___closed__1 = _init_l_MyNat_mul___closed__1();
lean_mark_persistent(l_MyNat_mul___closed__1);
l_instMulMyNat___closed__1 = _init_l_instMulMyNat___closed__1();
lean_mark_persistent(l_instMulMyNat___closed__1);
l_instMulMyNat = _init_l_instMulMyNat();
lean_mark_persistent(l_instMulMyNat);
l_one___closed__1 = _init_l_one___closed__1();
lean_mark_persistent(l_one___closed__1);
l_one = _init_l_one();
lean_mark_persistent(l_one);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
