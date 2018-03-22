// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// hclust_fca
IntegerVector hclust_fca(List hc, IntegerVector a, IntegerVector b);
RcppExport SEXP _bmrm_hclust_fca(SEXP hcSEXP, SEXP aSEXP, SEXP bSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type hc(hcSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type a(aSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type b(bSEXP);
    rcpp_result_gen = Rcpp::wrap(hclust_fca(hc, a, b));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_bmrm_hclust_fca", (DL_FUNC) &_bmrm_hclust_fca, 3},
    {NULL, NULL, 0}
};

RcppExport void R_init_bmrm(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
