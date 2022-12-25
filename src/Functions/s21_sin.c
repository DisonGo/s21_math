#include "s21_math.h"
/**
 * @brief Get sinus value.
 *
 * @param x Input value.
 * @return Sinus value.
 * @retval long double
 */
long double s21_sin(double x) { 
  long double res = 0, upper = 0, lower = 0;
  x = s21_fmod(x, 2 * S21_PI);
  for (int i = 0; i < 15; i++) {
    upper = s21_pow_int(-1, i) * s21_pow_int(x, 2 * i + 1);
    lower = s21_fuctorial(2 * i + 1);
    res += upper / lower;
  }
  return res;
}