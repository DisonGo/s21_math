#include "s21_math.h"
/**
 * @brief Get absolute value of x.
 *
 * @param x Input value.
 * @return Absolute value of x.
 * @retval int
 */
int s21_abs(int x) { return (x < 0 && x > INT_MIN) ? -x : x; }