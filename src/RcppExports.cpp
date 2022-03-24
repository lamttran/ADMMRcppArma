// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// Arma_colSums
arma::rowvec Arma_colSums(const arma::mat& x);
RcppExport SEXP _ADMMRcppArma_Arma_colSums(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(Arma_colSums(x));
    return rcpp_result_gen;
END_RCPP
}
// cumsum_rev
arma::vec cumsum_rev(NumericVector m);
RcppExport SEXP _ADMMRcppArma_cumsum_rev(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(cumsum_rev(m));
    return rcpp_result_gen;
END_RCPP
}
// cumsum_col
NumericMatrix cumsum_col(NumericMatrix m);
RcppExport SEXP _ADMMRcppArma_cumsum_col(SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(cumsum_col(m));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_ADMMRcppArma_Arma_colSums", (DL_FUNC) &_ADMMRcppArma_Arma_colSums, 1},
    {"_ADMMRcppArma_cumsum_rev", (DL_FUNC) &_ADMMRcppArma_cumsum_rev, 1},
    {"_ADMMRcppArma_cumsum_col", (DL_FUNC) &_ADMMRcppArma_cumsum_col, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_ADMMRcppArma(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
