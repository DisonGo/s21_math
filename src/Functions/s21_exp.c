#include "s21_math.h"
/**
 * @brief Returns e raised to the given power.
 *
 * @param x Power.
 * @return Raised e.
 * @retval long double
 */
long double s21_exp(double x) {
  if (x == S21_INF_NEG) return 0;
  long double result = 0;
  long double k = (long long int)(x / S21_LN2);
  long double r = x - k * S21_LN2;
  for (int i = 0; i < 128; i++) result += s21_pow_int(r, i) / s21_fuctorial(i);
  result *= s21_pow_int(2, k);
  return result;
}