#include "s21_math.h"
/**
 * @brief Computes square root.
 *
 * @param x Input value.
 * @return Square root of x.
 * @retval long double
 */
long double s21_sqrt(double x) {
  if (S21_IS_NAN(x) || x == S21_INF_NEG || x < 0) return S21_NAN;
  if (x == S21_INF_POS || x == 0) return (long double)x;
  return s21_pow(x, 0.5);
}