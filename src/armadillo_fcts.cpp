// [[Rcpp::depends(RcppArmadillo)]]
#include <RcppArmadillo.h>

using namespace Rcpp;

// [[Rcpp::export]]

arma::rowvec Arma_colSums(const arma::mat& x) {
  return arma::sum(x, 0);
}

// [[Rcpp::export]]

arma::vec cumsum_rev(NumericVector m) {
  arma::vec q = as<arma::vec>(m);
  for (int i = q.n_elem  - 1; i > 0; --i) {
    q(i - 1) += q(i);
  }
  return q;
}