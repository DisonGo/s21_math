#include "s21_math.h"
/**
 * @brief Get absolute value of x.
 *
 * @param x Input value.
 * @return Absolute value of x.
 * @retval long double
 */
long double s21_fabs(double x) {
  if (x < 0) x = -x;
  return (long double)x;
}