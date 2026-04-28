// Lean compiler output
// Module: CascadeProtocol.Predicates
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
LEAN_EXPORT uint8_t lp_cascade__protocol_hasEncryption___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_hasEncryption___lam__0___boxed(lean_object*);
static const lean_closure_object lp_cascade__protocol_hasEncryption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_cascade__protocol_hasEncryption___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_cascade__protocol_hasEncryption___closed__0 = (const lean_object*)&lp_cascade__protocol_hasEncryption___closed__0_value;
uint8_t l_List_any___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_cascade__protocol_hasEncryption(lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_hasEncryption___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_cascade__protocol_hasDecryption___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_hasDecryption___lam__0___boxed(lean_object*);
static const lean_closure_object lp_cascade__protocol_hasDecryption___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_cascade__protocol_hasDecryption___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_cascade__protocol_hasDecryption___closed__0 = (const lean_object*)&lp_cascade__protocol_hasDecryption___closed__0_value;
LEAN_EXPORT uint8_t lp_cascade__protocol_hasDecryption(lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_hasDecryption___boxed(lean_object*);
uint8_t lp_cascade__protocol_instDecidableEqFunc_decEq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_cascade__protocol_containsFunc___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_containsFunc___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_cascade__protocol_containsFunc(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_containsFunc___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_cascade__protocol_hasBalancingProperty(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_cascade__protocol_hasBalancingProperty___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_cascade__protocol_containsAdjacentPair(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_containsAdjacentPair___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_cascade__protocol_hasEncryption___lam__0(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 1;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 0;
return x_3;
}
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_hasEncryption___lam__0___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lp_cascade__protocol_hasEncryption___lam__0(x_1);
lean_dec_ref(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t lp_cascade__protocol_hasEncryption(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = ((lean_object*)(lp_cascade__protocol_hasEncryption___closed__0));
x_3 = l_List_any___redArg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_hasEncryption___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lp_cascade__protocol_hasEncryption(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t lp_cascade__protocol_hasDecryption___lam__0(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = 0;
return x_2;
}
else
{
uint8_t x_3; 
x_3 = 1;
return x_3;
}
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_hasDecryption___lam__0___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lp_cascade__protocol_hasDecryption___lam__0(x_1);
lean_dec_ref(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t lp_cascade__protocol_hasDecryption(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = ((lean_object*)(lp_cascade__protocol_hasDecryption___closed__0));
x_3 = l_List_any___redArg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_hasDecryption___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lp_cascade__protocol_hasDecryption(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t lp_cascade__protocol_containsFunc___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; 
x_3 = lp_cascade__protocol_instDecidableEqFunc_decEq(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_containsFunc___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_cascade__protocol_containsFunc___lam__0(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_cascade__protocol_containsFunc(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_alloc_closure((void*)(lp_cascade__protocol_containsFunc___lam__0___boxed), 2, 1);
lean_closure_set(x_3, 0, x_2);
x_4 = l_List_any___redArg(x_1, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_containsFunc___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_cascade__protocol_containsFunc(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_cascade__protocol_hasBalancingProperty(lean_object* x_1, uint8_t x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(x_3, 0, x_2);
lean_inc(x_1);
x_4 = lp_cascade__protocol_containsFunc(x_1, x_3);
if (x_4 == 0)
{
uint8_t x_5; 
lean_dec(x_1);
x_5 = 1;
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_alloc_ctor(0, 0, 1);
lean_ctor_set_uint8(x_6, 0, x_2);
x_7 = lp_cascade__protocol_containsFunc(x_1, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_hasBalancingProperty___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; uint8_t x_4; lean_object* x_5; 
x_3 = lean_unbox(x_2);
x_4 = lp_cascade__protocol_hasBalancingProperty(x_1, x_3);
x_5 = lean_box(x_4);
return x_5;
}
}
LEAN_EXPORT uint8_t lp_cascade__protocol_containsAdjacentPair(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_4; 
x_4 = 0;
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_6) == 0)
{
uint8_t x_10; 
x_10 = 0;
return x_10;
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_ctor_get(x_6, 0);
x_12 = lp_cascade__protocol_instDecidableEqFunc_decEq(x_5, x_2);
if (x_12 == 0)
{
x_7 = x_12;
goto block_9;
}
else
{
uint8_t x_13; 
x_13 = lp_cascade__protocol_instDecidableEqFunc_decEq(x_11, x_3);
x_7 = x_13;
goto block_9;
}
}
block_9:
{
if (x_7 == 0)
{
x_1 = x_6;
goto _start;
}
else
{
return x_7;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_containsAdjacentPair___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_5; 
x_4 = lp_cascade__protocol_containsAdjacentPair(x_1, x_2, x_3);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec(x_1);
x_5 = lean_box(x_4);
return x_5;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_cascade__protocol_CascadeProtocol_Basic(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_cascade__protocol_CascadeProtocol_Predicates(uint8_t builtin) {
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
