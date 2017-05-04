// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "reticulate_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// is_python3
bool is_python3();
RcppExport SEXP reticulate_is_python3() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(is_python3());
    return rcpp_result_gen;
END_RCPP
}
// py_last_error
List py_last_error();
RcppExport SEXP reticulate_py_last_error() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(py_last_error());
    return rcpp_result_gen;
END_RCPP
}
// py_is_callable
bool py_is_callable(PyObjectRef x);
RcppExport SEXP reticulate_py_is_callable(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_is_callable(x));
    return rcpp_result_gen;
END_RCPP
}
// r_to_py_impl
PyObjectRef r_to_py_impl(RObject object, bool convert);
RcppExport SEXP reticulate_r_to_py_impl(SEXP objectSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< RObject >::type object(objectSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(r_to_py_impl(object, convert));
    return rcpp_result_gen;
END_RCPP
}
// py_activate_virtualenv
void py_activate_virtualenv(const std::string& script);
RcppExport SEXP reticulate_py_activate_virtualenv(SEXP scriptSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type script(scriptSEXP);
    py_activate_virtualenv(script);
    return R_NilValue;
END_RCPP
}
// py_initialize
void py_initialize(const std::string& python, const std::string& libpython, const std::string& pythonhome, const std::string& virtualenv_activate, bool python3, bool interactive, const std::string& numpy_load_error);
RcppExport SEXP reticulate_py_initialize(SEXP pythonSEXP, SEXP libpythonSEXP, SEXP pythonhomeSEXP, SEXP virtualenv_activateSEXP, SEXP python3SEXP, SEXP interactiveSEXP, SEXP numpy_load_errorSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type python(pythonSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type libpython(libpythonSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type pythonhome(pythonhomeSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type virtualenv_activate(virtualenv_activateSEXP);
    Rcpp::traits::input_parameter< bool >::type python3(python3SEXP);
    Rcpp::traits::input_parameter< bool >::type interactive(interactiveSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type numpy_load_error(numpy_load_errorSEXP);
    py_initialize(python, libpython, pythonhome, virtualenv_activate, python3, interactive, numpy_load_error);
    return R_NilValue;
END_RCPP
}
// py_finalize
void py_finalize();
RcppExport SEXP reticulate_py_finalize() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    py_finalize();
    return R_NilValue;
END_RCPP
}
// py_is_none
bool py_is_none(PyObjectRef x);
RcppExport SEXP reticulate_py_is_none(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_is_none(x));
    return rcpp_result_gen;
END_RCPP
}
// py_str_impl
CharacterVector py_str_impl(PyObjectRef x);
RcppExport SEXP reticulate_py_str_impl(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_str_impl(x));
    return rcpp_result_gen;
END_RCPP
}
// py_print
void py_print(PyObjectRef x);
RcppExport SEXP reticulate_py_print(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    py_print(x);
    return R_NilValue;
END_RCPP
}
// py_is_function
bool py_is_function(PyObjectRef x);
RcppExport SEXP reticulate_py_is_function(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_is_function(x));
    return rcpp_result_gen;
END_RCPP
}
// py_is_null_xptr
bool py_is_null_xptr(PyObjectRef x);
RcppExport SEXP reticulate_py_is_null_xptr(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_is_null_xptr(x));
    return rcpp_result_gen;
END_RCPP
}
// py_validate_xptr
void py_validate_xptr(PyObjectRef x);
RcppExport SEXP reticulate_py_validate_xptr(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    py_validate_xptr(x);
    return R_NilValue;
END_RCPP
}
// py_numpy_available_impl
bool py_numpy_available_impl();
RcppExport SEXP reticulate_py_numpy_available_impl() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(py_numpy_available_impl());
    return rcpp_result_gen;
END_RCPP
}
// py_list_attributes_impl
std::vector<std::string> py_list_attributes_impl(PyObjectRef x);
RcppExport SEXP reticulate_py_list_attributes_impl(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_list_attributes_impl(x));
    return rcpp_result_gen;
END_RCPP
}
// py_has_attr
bool py_has_attr(PyObjectRef x, const std::string& name);
RcppExport SEXP reticulate_py_has_attr(SEXP xSEXP, SEXP nameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    rcpp_result_gen = Rcpp::wrap(py_has_attr(x, name));
    return rcpp_result_gen;
END_RCPP
}
// py_get_attr_impl
PyObjectRef py_get_attr_impl(PyObjectRef x, const std::string& name, bool silent);
RcppExport SEXP reticulate_py_get_attr_impl(SEXP xSEXP, SEXP nameSEXP, SEXP silentSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    Rcpp::traits::input_parameter< bool >::type silent(silentSEXP);
    rcpp_result_gen = Rcpp::wrap(py_get_attr_impl(x, name, silent));
    return rcpp_result_gen;
END_RCPP
}
// py_set_attr_impl
void py_set_attr_impl(PyObjectRef x, const std::string& name, RObject value);
RcppExport SEXP reticulate_py_set_attr_impl(SEXP xSEXP, SEXP nameSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    Rcpp::traits::input_parameter< RObject >::type value(valueSEXP);
    py_set_attr_impl(x, name, value);
    return R_NilValue;
END_RCPP
}
// py_get_attribute_types
IntegerVector py_get_attribute_types(PyObjectRef x, const std::vector<std::string>& attributes);
RcppExport SEXP reticulate_py_get_attribute_types(SEXP xSEXP, SEXP attributesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< const std::vector<std::string>& >::type attributes(attributesSEXP);
    rcpp_result_gen = Rcpp::wrap(py_get_attribute_types(x, attributes));
    return rcpp_result_gen;
END_RCPP
}
// py_ref_to_r_with_convert
SEXP py_ref_to_r_with_convert(PyObjectRef x, bool convert);
RcppExport SEXP reticulate_py_ref_to_r_with_convert(SEXP xSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(py_ref_to_r_with_convert(x, convert));
    return rcpp_result_gen;
END_RCPP
}
// py_ref_to_r
SEXP py_ref_to_r(PyObjectRef x);
RcppExport SEXP reticulate_py_ref_to_r(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(py_ref_to_r(x));
    return rcpp_result_gen;
END_RCPP
}
// py_call_impl
SEXP py_call_impl(PyObjectRef x, List args, List keywords);
RcppExport SEXP reticulate_py_call_impl(SEXP xSEXP, SEXP argsSEXP, SEXP keywordsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< List >::type args(argsSEXP);
    Rcpp::traits::input_parameter< List >::type keywords(keywordsSEXP);
    rcpp_result_gen = Rcpp::wrap(py_call_impl(x, args, keywords));
    return rcpp_result_gen;
END_RCPP
}
// py_dict
PyObjectRef py_dict(const List& keys, const List& items, bool convert);
RcppExport SEXP reticulate_py_dict(SEXP keysSEXP, SEXP itemsSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type keys(keysSEXP);
    Rcpp::traits::input_parameter< const List& >::type items(itemsSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(py_dict(keys, items, convert));
    return rcpp_result_gen;
END_RCPP
}
// py_dict_get_item
SEXP py_dict_get_item(PyObjectRef dict, RObject key);
RcppExport SEXP reticulate_py_dict_get_item(SEXP dictSEXP, SEXP keySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< RObject >::type key(keySEXP);
    rcpp_result_gen = Rcpp::wrap(py_dict_get_item(dict, key));
    return rcpp_result_gen;
END_RCPP
}
// py_dict_set_item
void py_dict_set_item(PyObjectRef dict, RObject item, RObject value);
RcppExport SEXP reticulate_py_dict_set_item(SEXP dictSEXP, SEXP itemSEXP, SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type dict(dictSEXP);
    Rcpp::traits::input_parameter< RObject >::type item(itemSEXP);
    Rcpp::traits::input_parameter< RObject >::type value(valueSEXP);
    py_dict_set_item(dict, item, value);
    return R_NilValue;
END_RCPP
}
// py_dict_length
int py_dict_length(PyObjectRef dict);
RcppExport SEXP reticulate_py_dict_length(SEXP dictSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type dict(dictSEXP);
    rcpp_result_gen = Rcpp::wrap(py_dict_length(dict));
    return rcpp_result_gen;
END_RCPP
}
// py_dict_get_keys_as_str
CharacterVector py_dict_get_keys_as_str(PyObjectRef dict);
RcppExport SEXP reticulate_py_dict_get_keys_as_str(SEXP dictSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type dict(dictSEXP);
    rcpp_result_gen = Rcpp::wrap(py_dict_get_keys_as_str(dict));
    return rcpp_result_gen;
END_RCPP
}
// py_tuple
PyObjectRef py_tuple(const List& items, bool convert);
RcppExport SEXP reticulate_py_tuple(SEXP itemsSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type items(itemsSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(py_tuple(items, convert));
    return rcpp_result_gen;
END_RCPP
}
// py_tuple_length
int py_tuple_length(PyObjectRef tuple);
RcppExport SEXP reticulate_py_tuple_length(SEXP tupleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type tuple(tupleSEXP);
    rcpp_result_gen = Rcpp::wrap(py_tuple_length(tuple));
    return rcpp_result_gen;
END_RCPP
}
// py_module_import
PyObjectRef py_module_import(const std::string& module, bool convert);
RcppExport SEXP reticulate_py_module_import(SEXP moduleSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type module(moduleSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(py_module_import(module, convert));
    return rcpp_result_gen;
END_RCPP
}
// py_module_proxy_import
void py_module_proxy_import(PyObjectRef proxy, PyObjectRef module);
RcppExport SEXP reticulate_py_module_proxy_import(SEXP proxySEXP, SEXP moduleSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type proxy(proxySEXP);
    Rcpp::traits::input_parameter< PyObjectRef >::type module(moduleSEXP);
    py_module_proxy_import(proxy, module);
    return R_NilValue;
END_RCPP
}
// py_list_submodules
CharacterVector py_list_submodules(const std::string& module);
RcppExport SEXP reticulate_py_list_submodules(SEXP moduleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type module(moduleSEXP);
    rcpp_result_gen = Rcpp::wrap(py_list_submodules(module));
    return rcpp_result_gen;
END_RCPP
}
// py_iterate
List py_iterate(PyObjectRef x, Function f);
RcppExport SEXP reticulate_py_iterate(SEXP xSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< PyObjectRef >::type x(xSEXP);
    Rcpp::traits::input_parameter< Function >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(py_iterate(x, f));
    return rcpp_result_gen;
END_RCPP
}
// py_run_string_impl
SEXP py_run_string_impl(const std::string& code, bool local, bool convert);
RcppExport SEXP reticulate_py_run_string_impl(SEXP codeSEXP, SEXP localSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type code(codeSEXP);
    Rcpp::traits::input_parameter< bool >::type local(localSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(py_run_string_impl(code, local, convert));
    return rcpp_result_gen;
END_RCPP
}
// py_run_file_impl
SEXP py_run_file_impl(const std::string& file, bool local, bool convert);
RcppExport SEXP reticulate_py_run_file_impl(SEXP fileSEXP, SEXP localSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type file(fileSEXP);
    Rcpp::traits::input_parameter< bool >::type local(localSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(py_run_file_impl(file, local, convert));
    return rcpp_result_gen;
END_RCPP
}
// py_eval_impl
SEXP py_eval_impl(const std::string& code, bool convert);
RcppExport SEXP reticulate_py_eval_impl(SEXP codeSEXP, SEXP convertSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type code(codeSEXP);
    Rcpp::traits::input_parameter< bool >::type convert(convertSEXP);
    rcpp_result_gen = Rcpp::wrap(py_eval_impl(code, convert));
    return rcpp_result_gen;
END_RCPP
}
