#include "s21_math.h"
/**
 * @brief Get tangens value.
 *
 * @param x Input value.
 * @return Tangens value.
 * @retval long double
 */
long double s21_tan(double x) {
  x = s21_fmod(x, S21_PI);
  long double cos_res = s21_cos(x);
  return !cos_res ? S21_NAN : s21_sin(x) / cos_res;
}