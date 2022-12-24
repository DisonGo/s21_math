#include "s21_math.h"
// TODO Implement s21_cos
long double s21_cos(double x) { 
  long double res = 0;
  x = s21_fmod(x, 2 * S21_PI);
  for (int i = 0; i < 15; i++)
    res += 
      s21_pow_int(-1, i) * s21_pow_int(x, 2 * i) * 1. / s21_fuctorial(2 * i);
  return res;
}