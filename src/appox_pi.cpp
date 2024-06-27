#include <Rcpp.h>
using namespace Rcpp;
// [[Rcpp::interfaces(r, cpp)]]

 //' Add Two Numbers
 //'
 //' Return the sum of two numbers.
 //' @param x
 //' @param y
 //' @export

 // [[Rcpp::export]]
double approx_pi(const int N) {
  NumericVector x = runif(N);
  NumericVector y = runif(N);
  NumericVector d = sqrt(x*x + y*y);
  return 4.0 * sum(d < 1.0) / N;
}
