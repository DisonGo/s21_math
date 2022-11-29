#ifndef S21_MATH_H_
#define S21_MATH_H_

#include <limits.h>
#include <stdio.h>

#define S21_PI 3.14159265358979323846
#define S21_NAN 0.0 / 0.0  //  __builtin_nanf("0x7fc00000")
#define S21_INF_POS +1.0 / 0.0
#define S21_INF_NEG -1.0 / 0.0
#define S21_LN2 0.693147180559945309417232
#define S21_E 2.71828182845904523536028747

int s21_abs(int x);
long double s21_fabs(double x);
long double s21_fuctorial(long long int x);
long double s21_fmod(double x, double y);
long double s21_pow_int(double base, long long int exp);
long double s21_exp(double x);
long double s21_ceil(double x);
long double s21_floor(double x);
long double s21_sqrt(double x);
long double s21_log(double x);
long double s21_atan(double x);
long double s21_asin(double x);
long double s21_acos(double x);
long double s21_sin(double x);
long double s21_cos(double x);
long double s21_tan(double x);
long double s21_pow(double base, double exp);

#endif  // S21_MATH_H_
