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
  long double mantissa = 0, num = -1;
  while (s21_pow((num + 2), 2) <= x) num++;
  for (int j = 0; j <= 10; j++) {
    long double del = 1.0 / s21_pow_int(10, j);
    for (int i = 0; s21_pow((num + (i + 1) * del), 2) <= x; i++)
      mantissa = i * del;
    num += mantissa;
  }
  return num;
}