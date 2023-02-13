#ifndef UTILS_HPP_INCLUDED
#define UTILS_HPP_INCLUDED

#include <stdlib.h>

double randab(double a, double b) {
  return (double)rand() / (double)RAND_MAX * (b - a) + a;
}

double fact(double x) {
  double prod = 1.0f;
  for (double i = x; i >= 1; i--) {
    prod *= i;
  }
  return prod;
}

double semifact(double x) {
  double prod = 1.0f;
  for (double i = x; i >= 1; i -= 2) {
    prod *= i;
  }
  return prod;
}

double gaussian_bell(double x) { return exp(-x * x); }

double lerp(double a, double b, double t) { return (1 - t) * a + t * b; }

#endif // UTILS_HPP_INCLUDED