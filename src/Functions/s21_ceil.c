#include "s21_math.h"
/**
 * @brief Returns the nearest integer not less than x.
 *
 * @param x Input value.
 * @return Nearest integer not less than x.
 * @retval long double
 */
long double s21_ceil(double x) {
  if (x != x || x == S21_INF_POS || x == S21_INF_NEG) return x;
  int int_part = (int)x;
  int_part += (x > 0 && (x - int_part));
  long double res = int_part;
  if (res == 0 && x < 0) res = -res;
  return res;
}