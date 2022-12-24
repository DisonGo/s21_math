#include "s21_math.h"
// TODO Implement s21_tan
long double s21_tan(double x) {
  x = s21_fmod(x, S21_PI);
  long double cos_res = s21_cos(x);
  return !cos_res ? S21_NAN : s21_sin(x) / cos_res;
}