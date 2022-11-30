#include "s21_math.h"
/**
 * @brief Returns the nearest integer not greater than x.
 *
 * @param x Input value.
 * @return Nearest integer not greater than x.
 * @retval long double
 */
long double s21_floor(double x) {
  if (x != x || x == S21_INF_POS || x == S21_INF_NEG) return x;
  int int_part = (int)x;
  int_part -= (x < 0 && (x - int_part));
  return (long double)int_part;
}