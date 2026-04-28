// Lean compiler output
// Module: CascadeProtocol.Validation
// Imports: public import Init public import CascadeProtocol.Basic public import CascadeProtocol.Reduction public import CascadeProtocol.Security
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
uint8_t lp_cascade__protocol_instDecidableEqFunc_decEq(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_cascade__protocol_List_beq___at___00isIrreducible_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_List_beq___at___00isIrreducible_spec__0___boxed(lean_object*, lean_object*);
lean_object* lp_cascade__protocol_reduceWord(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_cascade__protocol_isIrreducible(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_isIrreducible___boxed(lean_object*, lean_object*);
uint8_t l_List_all___redArg(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_cascade__protocol_allWordsIrreducible(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_allWordsIrreducible___boxed(lean_object*, lean_object*);
lean_object* lp_cascade__protocol_cancelsSymmetric___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_cascade__protocol_isProtocolIrreducibleSymmetric___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_cascade__protocol_cancelsSymmetric___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_cascade__protocol_isProtocolIrreducibleSymmetric___closed__0 = (const lean_object*)&lp_cascade__protocol_isProtocolIrreducibleSymmetric___closed__0_value;
LEAN_EXPORT uint8_t lp_cascade__protocol_isProtocolIrreducibleSymmetric(lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_isProtocolIrreducibleSymmetric___boxed(lean_object*);
lean_object* lp_cascade__protocol_cancelsNonsymmetric___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_cascade__protocol_isProtocolIrreducibleNonsymmetric___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_cascade__protocol_cancelsNonsymmetric___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_cascade__protocol_isProtocolIrreducibleNonsymmetric___closed__0 = (const lean_object*)&lp_cascade__protocol_isProtocolIrreducibleNonsymmetric___closed__0_value;
LEAN_EXPORT uint8_t lp_cascade__protocol_isProtocolIrreducibleNonsymmetric(lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_isProtocolIrreducibleNonsymmetric___boxed(lean_object*);
static const lean_string_object lp_cascade__protocol_checkSecureSymmetric___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 43, .m_data = "INVALID – protocol contains reducible words"};
static const lean_object* lp_cascade__protocol_checkSecureSymmetric___closed__0 = (const lean_object*)&lp_cascade__protocol_checkSecureSymmetric___closed__0_value;
static const lean_string_object lp_cascade__protocol_checkSecureSymmetric___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "INSECURE (symmetric)"};
static const lean_object* lp_cascade__protocol_checkSecureSymmetric___closed__1 = (const lean_object*)&lp_cascade__protocol_checkSecureSymmetric___closed__1_value;
static const lean_string_object lp_cascade__protocol_checkSecureSymmetric___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "SECURE (symmetric)"};
static const lean_object* lp_cascade__protocol_checkSecureSymmetric___closed__2 = (const lean_object*)&lp_cascade__protocol_checkSecureSymmetric___closed__2_value;
uint8_t lp_cascade__protocol_isSecureSymmetric(lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_checkSecureSymmetric(lean_object*);
static const lean_string_object lp_cascade__protocol_checkSecureNonsymmetric___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "INSECURE (nonsymmetric)"};
static const lean_object* lp_cascade__protocol_checkSecureNonsymmetric___closed__0 = (const lean_object*)&lp_cascade__protocol_checkSecureNonsymmetric___closed__0_value;
static const lean_string_object lp_cascade__protocol_checkSecureNonsymmetric___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "SECURE (nonsymmetric)"};
static const lean_object* lp_cascade__protocol_checkSecureNonsymmetric___closed__1 = (const lean_object*)&lp_cascade__protocol_checkSecureNonsymmetric___closed__1_value;
uint8_t lp_cascade__protocol_isSecureNonsymmetric(lean_object*);
LEAN_EXPORT lean_object* lp_cascade__protocol_checkSecureNonsymmetric(lean_object*);
LEAN_EXPORT uint8_t lp_cascade__protocol_List_beq___at___00isIrreducible_spec__0(lean_object* x_1, lean_object* x_2) {
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
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_ctor_get(x_2, 0);
x_9 = lean_ctor_get(x_2, 1);
x_10 = lp_cascade__protocol_instDecidableEqFunc_decEq(x_6, x_8);
if (x_10 == 0)
{
return x_10;
}
else
{
x_1 = x_7;
x_2 = x_9;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_List_beq___at___00isIrreducible_spec__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_cascade__protocol_List_beq___at___00isIrreducible_spec__0(x_1, x_2);
lean_dec(x_2);
lean_dec(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_cascade__protocol_isIrreducible(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
lean_inc(x_2);
x_3 = lp_cascade__protocol_reduceWord(x_1, x_2);
x_4 = lp_cascade__protocol_List_beq___at___00isIrreducible_spec__0(x_3, x_2);
lean_dec(x_2);
lean_dec(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_isIrreducible___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_cascade__protocol_isIrreducible(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_cascade__protocol_allWordsIrreducible(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec_ref(x_2);
x_5 = lean_alloc_closure((void*)(lp_cascade__protocol_isIrreducible___boxed), 2, 1);
lean_closure_set(x_5, 0, x_1);
lean_inc_ref(x_5);
x_6 = l_List_all___redArg(x_3, x_5);
if (x_6 == 0)
{
lean_dec_ref(x_5);
lean_dec(x_4);
return x_6;
}
else
{
uint8_t x_7; 
x_7 = l_List_all___redArg(x_4, x_5);
return x_7;
}
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_allWordsIrreducible___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_cascade__protocol_allWordsIrreducible(x_1, x_2);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT uint8_t lp_cascade__protocol_isProtocolIrreducibleSymmetric(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = ((lean_object*)(lp_cascade__protocol_isProtocolIrreducibleSymmetric___closed__0));
x_3 = lp_cascade__protocol_allWordsIrreducible(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_isProtocolIrreducibleSymmetric___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lp_cascade__protocol_isProtocolIrreducibleSymmetric(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT uint8_t lp_cascade__protocol_isProtocolIrreducibleNonsymmetric(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = ((lean_object*)(lp_cascade__protocol_isProtocolIrreducibleNonsymmetric___closed__0));
x_3 = lp_cascade__protocol_allWordsIrreducible(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_isProtocolIrreducibleNonsymmetric___boxed(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; 
x_2 = lp_cascade__protocol_isProtocolIrreducibleNonsymmetric(x_1);
x_3 = lean_box(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_checkSecureSymmetric(lean_object* x_1) {
_start:
{
uint8_t x_2; 
lean_inc_ref(x_1);
x_2 = lp_cascade__protocol_isProtocolIrreducibleSymmetric(x_1);
if (x_2 == 0)
{
lean_object* x_3; 
lean_dec_ref(x_1);
x_3 = ((lean_object*)(lp_cascade__protocol_checkSecureSymmetric___closed__0));
return x_3;
}
else
{
uint8_t x_4; 
x_4 = lp_cascade__protocol_isSecureSymmetric(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = ((lean_object*)(lp_cascade__protocol_checkSecureSymmetric___closed__1));
return x_5;
}
else
{
lean_object* x_6; 
x_6 = ((lean_object*)(lp_cascade__protocol_checkSecureSymmetric___closed__2));
return x_6;
}
}
}
}
LEAN_EXPORT lean_object* lp_cascade__protocol_checkSecureNonsymmetric(lean_object* x_1) {
_start:
{
uint8_t x_2; 
lean_inc_ref(x_1);
x_2 = lp_cascade__protocol_isProtocolIrreducibleNonsymmetric(x_1);
if (x_2 == 0)
{
lean_object* x_3; 
lean_dec_ref(x_1);
x_3 = ((lean_object*)(lp_cascade__protocol_checkSecureSymmetric___closed__0));
return x_3;
}
else
{
uint8_t x_4; 
x_4 = lp_cascade__protocol_isSecureNonsymmetric(x_1);
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = ((lean_object*)(lp_cascade__protocol_checkSecureNonsymmetric___closed__0));
return x_5;
}
else
{
lean_object* x_6; 
x_6 = ((lean_object*)(lp_cascade__protocol_checkSecureNonsymmetric___closed__1));
return x_6;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_cascade__protocol_CascadeProtocol_Basic(uint8_t builtin);
lean_object* initialize_cascade__protocol_CascadeProtocol_Reduction(uint8_t builtin);
lean_object* initialize_cascade__protocol_CascadeProtocol_Security(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_cascade__protocol_CascadeProtocol_Validation(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_cascade__protocol_CascadeProtocol_Basic(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_cascade__protocol_CascadeProtocol_Reduction(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_cascade__protocol_CascadeProtocol_Security(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
