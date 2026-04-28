// Lean compiler output
// Module: CascadeProtocol.Reduction
// Imports: public import Init public import CascadeProtocol.Basic
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
uint8_t lp_cascade__protocol_instDecidableEqUser(uint8_t, uint8_t);
LEAN_EXPORT uint8_t lp_cascade__protocol_cancelsSymmetric(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_cancelsSymmetric___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_cascade__protocol_cancelsNonsymmetric(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_cancelsNonsymmetric___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_reduceOnce(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_reduceAux(lean_object*, lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_reduceWord(lean_object*, lean_object*);
static const lean_closure_object lp_cascade__protocol_reduceSymmetric___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_cascade__protocol_cancelsSymmetric___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_cascade__protocol_reduceSymmetric___closed__0 = (const lean_object*)&lp_cascade__protocol_reduceSymmetric___closed__0_value;
LEAN_EXPORT lean_object* lp_cascade__protocol_reduceSymmetric(lean_object*);
static const lean_closure_object lp_cascade__protocol_reduceNonsymmetric___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_cascade__protocol_cancelsNonsymmetric___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_cascade__protocol_reduceNonsymmetric___closed__0 = (const lean_object*)&lp_cascade__protocol_reduceNonsymmetric___closed__0_value;
LEAN_EXPORT lean_object* lp_cascade__protocol_reduceNonsymmetric(lean_object*);
LEAN_EXPORT uint8_t lp_cascade__protocol_cancelsSymmetric(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
if (lean_obj_tag(x_2) == 1)
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; 
x_3 = lean_ctor_get_uint8(x_1, 0);
x_4 = lean_ctor_get_uint8(x_2, 0);
x_5 = lp_cascade__protocol_instDecidableEqUser(x_3, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
else
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_7; uint8_t x_8; uint8_t x_9; 
x_7 = lean_ctor_get_uint8(x_1, 0);
x_8 = lean_ctor_get_uint8(x_2, 0);
x_9 = lp_cascade__protocol_instDecidableEqUser(x_7, x_8);
return x_9;
}
else
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
}
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_cancelsSymmetric___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_cascade__protocol_cancelsSymmetric(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_cascade__protocol_cancelsNonsymmetric(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 1)
{
if (lean_obj_tag(x_2) == 0)
{
uint8_t x_3; uint8_t x_4; uint8_t x_5; 
x_3 = lean_ctor_get_uint8(x_1, 0);
x_4 = lean_ctor_get_uint8(x_2, 0);
x_5 = lp_cascade__protocol_instDecidableEqUser(x_3, x_4);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = 0;
return x_6;
}
}
else
{
uint8_t x_7; 
x_7 = 0;
return x_7;
}
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_cancelsNonsymmetric___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_cascade__protocol_cancelsNonsymmetric(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_reduceOnce(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec_ref(x_1);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; 
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_5 = lean_box(0);
return x_5;
}
else
{
uint8_t x_6; 
x_6 = !lean_is_exclusive(x_2);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_7 = lean_ctor_get(x_2, 0);
x_8 = lean_ctor_get(x_2, 1);
lean_dec(x_8);
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
lean_inc_ref(x_1);
lean_inc(x_9);
lean_inc(x_7);
x_11 = lean_apply_2(x_1, x_7, x_9);
x_12 = lean_unbox(x_11);
if (x_12 == 0)
{
lean_object* x_13; 
x_13 = lp_cascade__protocol_reduceOnce(x_1, x_4);
if (lean_obj_tag(x_13) == 0)
{
lean_free_object(x_2);
lean_dec(x_7);
return x_13;
}
else
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
lean_object* x_15; 
x_15 = lean_ctor_get(x_13, 0);
lean_ctor_set(x_2, 1, x_15);
lean_ctor_set(x_13, 0, x_2);
return x_13;
}
else
{
lean_object* x_16; lean_object* x_17; 
x_16 = lean_ctor_get(x_13, 0);
lean_inc(x_16);
lean_dec(x_13);
lean_ctor_set(x_2, 1, x_16);
x_17 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_17, 0, x_2);
return x_17;
}
}
}
else
{
lean_object* x_18; 
lean_inc(x_10);
lean_free_object(x_2);
lean_dec_ref(x_4);
lean_dec(x_7);
lean_dec_ref(x_1);
x_18 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_18, 0, x_10);
return x_18;
}
}
else
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_19 = lean_ctor_get(x_2, 0);
lean_inc(x_19);
lean_dec(x_2);
x_20 = lean_ctor_get(x_4, 0);
x_21 = lean_ctor_get(x_4, 1);
lean_inc_ref(x_1);
lean_inc(x_20);
lean_inc(x_19);
x_22 = lean_apply_2(x_1, x_19, x_20);
x_23 = lean_unbox(x_22);
if (x_23 == 0)
{
lean_object* x_24; 
x_24 = lp_cascade__protocol_reduceOnce(x_1, x_4);
if (lean_obj_tag(x_24) == 0)
{
lean_dec(x_19);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
if (lean_is_exclusive(x_24)) {
 lean_ctor_release(x_24, 0);
 x_26 = x_24;
} else {
 lean_dec_ref(x_24);
 x_26 = lean_box(0);
}
x_27 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_27, 0, x_19);
lean_ctor_set(x_27, 1, x_25);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(1, 1, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_27);
return x_28;
}
}
else
{
lean_object* x_29; 
lean_inc(x_21);
lean_dec_ref(x_4);
lean_dec(x_19);
lean_dec_ref(x_1);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_21);
return x_29;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_reduceAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_2, x_4);
if (x_5 == 1)
{
lean_dec(x_2);
lean_dec_ref(x_1);
return x_3;
}
else
{
lean_object* x_6; 
lean_inc(x_3);
lean_inc_ref(x_1);
x_6 = lp_cascade__protocol_reduceOnce(x_1, x_3);
if (lean_obj_tag(x_6) == 0)
{
lean_dec(x_2);
lean_dec_ref(x_1);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_dec(x_3);
x_7 = lean_ctor_get(x_6, 0);
lean_inc(x_7);
lean_dec_ref(x_6);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_2, x_8);
lean_dec(x_2);
x_2 = x_9;
x_3 = x_7;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_reduceWord(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = l_List_lengthTR___redArg(x_2);
x_4 = lp_cascade__protocol_reduceAux(x_1, x_3, x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_reduceSymmetric(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = ((lean_object*)(lp_cascade__protocol_reduceSymmetric___closed__0));
x_3 = lp_cascade__protocol_reduceWord(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_reduceNonsymmetric(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = ((lean_object*)(lp_cascade__protocol_reduceNonsymmetric___closed__0));
x_3 = lp_cascade__protocol_reduceWord(x_2, x_1);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_cascade__protocol_CascadeProtocol_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_cascade__protocol_CascadeProtocol_Reduction(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_cascade__protocol_CascadeProtocol_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
