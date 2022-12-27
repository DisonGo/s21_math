#include "s21_math.h"
int is_nan_answer(double x, double y);

/**
 * @brief Remainder of the floating-point division operation.
 *
 * @param x Dividend.
 * @param y Divisor.
 * @return Remainder of the division.
 * @retval long double
 */
long double s21_fmod(double x, double y) {
  if (is_nan_answer(x, y)) return S21_NAN;
  if (S21_IS_INF(y)) return (long double)x;
  int n = x / y;
  long double res = (long double)x - n * (long double)y;
  return res;
}
int is_nan_answer(double x, double y) {
  int A = (y == 0);
  int B = S21_IS_INF(x);
  int C = S21_IS_INF(y);
  int D = (B && C && x != y);
  return (A || B || D);
}