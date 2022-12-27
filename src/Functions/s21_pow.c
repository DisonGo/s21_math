#include "s21_math.h"
/**
 * @brief Raises a number to the given power.
 *
 * @param base Number to raise.
 * @param exp Power.
 * @return Raised number.
 * @retval long double
 */
long double s21_pow(double base, double exp) {
  if (!exp) return 1;
  if (base == S21_INF_NEG && exp == S21_INF_NEG) return 0;
  if (base == S21_INF_NEG && exp == S21_INF_POS) return S21_INF_POS;
  if (base < 0 && exp != (long long int)exp) return S21_NAN;
  long double res = 0;
  int sign = base < 0 ? -1 : 1;
  res = s21_exp(exp * s21_log(base * sign));
  if (s21_fmod(exp, 2)) res *= sign;
  return res;
}