// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// jaccard_coeff
NumericMatrix jaccard_coeff(NumericMatrix idx);
RcppExport SEXP Rphenograph_jaccard_coeff(SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericMatrix >::type idx(idxSEXP);
    __result = Rcpp::wrap(jaccard_coeff(idx));
    return __result;
END_RCPP
}
