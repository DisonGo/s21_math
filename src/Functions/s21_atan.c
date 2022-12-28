#include "s21_math.h"
/**
 * @brief Get arctangens value.
 *
 * @param x Input value.
 * @return Arctangens value.
 * @retval long double
 */
long double s21_atan(double x) {
  long double res = 0;
  if (x == S21_INF_POS) return S21_PI / 2;
  if (x == S21_INF_NEG) return -S21_PI / 2;
  if (S21_IS_NAN(x)) return x;
  if (x == 1) return 0.785398163;
  if (x == -1) return -0.785398163;
  int is_in_range = (x > -1 && x < 1);
  res = is_in_range ? x : 1.0 / x;
  for (int i = 1; i < 7000; i++) {
    double a = s21_pow_int(-1, i);
    double b = s21_pow_int(x, (1 + 2 * i) * (is_in_range ? 1 : -1));
    double c = 1 + 2 * i;
    res += a * b / c;
  }
  if (!is_in_range) res = (S21_PI * s21_fabs(x) / (2 * x)) - res;
  return res;
}