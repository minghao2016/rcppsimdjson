// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// deserialize_json
SEXP deserialize_json(const Rcpp::CharacterVector& json, const std::string& json_pointer, SEXP empty_array, SEXP empty_object, SEXP single_null, const int simplify_to, const int type_policy, const int int64_r_type);
RcppExport SEXP _RcppSimdJson_deserialize_json(SEXP jsonSEXP, SEXP json_pointerSEXP, SEXP empty_arraySEXP, SEXP empty_objectSEXP, SEXP single_nullSEXP, SEXP simplify_toSEXP, SEXP type_policySEXP, SEXP int64_r_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type json(jsonSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type json_pointer(json_pointerSEXP);
    Rcpp::traits::input_parameter< SEXP >::type empty_array(empty_arraySEXP);
    Rcpp::traits::input_parameter< SEXP >::type empty_object(empty_objectSEXP);
    Rcpp::traits::input_parameter< SEXP >::type single_null(single_nullSEXP);
    Rcpp::traits::input_parameter< const int >::type simplify_to(simplify_toSEXP);
    Rcpp::traits::input_parameter< const int >::type type_policy(type_policySEXP);
    Rcpp::traits::input_parameter< const int >::type int64_r_type(int64_r_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(deserialize_json(json, json_pointer, empty_array, empty_object, single_null, simplify_to, type_policy, int64_r_type));
    return rcpp_result_gen;
END_RCPP
}
// load_json
SEXP load_json(const Rcpp::CharacterVector& file_path, const std::string& json_pointer, SEXP empty_array, SEXP empty_object, SEXP single_null, const int simplify_to, const int type_policy, const int int64_r_type);
RcppExport SEXP _RcppSimdJson_load_json(SEXP file_pathSEXP, SEXP json_pointerSEXP, SEXP empty_arraySEXP, SEXP empty_objectSEXP, SEXP single_nullSEXP, SEXP simplify_toSEXP, SEXP type_policySEXP, SEXP int64_r_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::CharacterVector& >::type file_path(file_pathSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type json_pointer(json_pointerSEXP);
    Rcpp::traits::input_parameter< SEXP >::type empty_array(empty_arraySEXP);
    Rcpp::traits::input_parameter< SEXP >::type empty_object(empty_objectSEXP);
    Rcpp::traits::input_parameter< SEXP >::type single_null(single_nullSEXP);
    Rcpp::traits::input_parameter< const int >::type simplify_to(simplify_toSEXP);
    Rcpp::traits::input_parameter< const int >::type type_policy(type_policySEXP);
    Rcpp::traits::input_parameter< const int >::type int64_r_type(int64_r_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(load_json(file_path, json_pointer, empty_array, empty_object, single_null, simplify_to, type_policy, int64_r_type));
    return rcpp_result_gen;
END_RCPP
}
// exceptions_enabled
bool exceptions_enabled();
RcppExport SEXP _RcppSimdJson_exceptions_enabled() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(exceptions_enabled());
    return rcpp_result_gen;
END_RCPP
}
// check_int64
SEXP check_int64();
RcppExport SEXP _RcppSimdJson_check_int64() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(check_int64());
    return rcpp_result_gen;
END_RCPP
}
// validateJSON
bool validateJSON(const std::string filename);
RcppExport SEXP _RcppSimdJson_validateJSON(SEXP filenameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string >::type filename(filenameSEXP);
    rcpp_result_gen = Rcpp::wrap(validateJSON(filename));
    return rcpp_result_gen;
END_RCPP
}
// parseExample
void parseExample();
RcppExport SEXP _RcppSimdJson_parseExample() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    parseExample();
    return R_NilValue;
END_RCPP
}
// cppVersion
int cppVersion();
RcppExport SEXP _RcppSimdJson_cppVersion() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(cppVersion());
    return rcpp_result_gen;
END_RCPP
}
// unsupportedArchitecture
bool unsupportedArchitecture();
RcppExport SEXP _RcppSimdJson_unsupportedArchitecture() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(unsupportedArchitecture());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppSimdJson_deserialize_json", (DL_FUNC) &_RcppSimdJson_deserialize_json, 8},
    {"_RcppSimdJson_load_json", (DL_FUNC) &_RcppSimdJson_load_json, 8},
    {"_RcppSimdJson_exceptions_enabled", (DL_FUNC) &_RcppSimdJson_exceptions_enabled, 0},
    {"_RcppSimdJson_check_int64", (DL_FUNC) &_RcppSimdJson_check_int64, 0},
    {"_RcppSimdJson_validateJSON", (DL_FUNC) &_RcppSimdJson_validateJSON, 1},
    {"_RcppSimdJson_parseExample", (DL_FUNC) &_RcppSimdJson_parseExample, 0},
    {"_RcppSimdJson_cppVersion", (DL_FUNC) &_RcppSimdJson_cppVersion, 0},
    {"_RcppSimdJson_unsupportedArchitecture", (DL_FUNC) &_RcppSimdJson_unsupportedArchitecture, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppSimdJson(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
