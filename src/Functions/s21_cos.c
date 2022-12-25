#include "s21_math.h"
// TODO Implement s21_cos
/**
 * @brief Get cosine value.
 *
 * @param x Input value.
 * @return Cosine value.
 * @retval long double
 */
long double s21_cos(double x) {
  long double res = S21_NAN;
  if (x != S21_INF_POS || x != S21_INF_NEG || !S21_IS_NAN(x)) 
    res = s21_sin(S21_PI / 2 - x);
  return res;
}