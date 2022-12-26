#include "s21_math.h"

#include <check.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/*

ABS TEST

*/

START_TEST(s21_abs_test1) { ck_assert_int_eq(s21_abs(5), abs(5)); }
END_TEST

START_TEST(s21_abs_test2) { ck_assert_int_eq(s21_abs(-5), abs(-5)); }
END_TEST

START_TEST(s21_abs_test3) {
  ck_assert_int_eq(s21_abs((int)INFINITY), abs((int)INFINITY));
}
END_TEST

START_TEST(s21_abs_test4) {
  ck_assert_int_eq(s21_abs((int)NAN), abs((int)NAN));
}
END_TEST

START_TEST(s21_abs_test5) {
  ck_assert_int_eq(s21_abs((int)-INFINITY), abs((int)-INFINITY));
}
END_TEST

/*

CEIL TEST

*/

START_TEST(s21_ceil_test1) {
  ck_assert_double_eq_tol(s21_ceil(-0.1), ceil(-0.1), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test2) {
  ck_assert_double_eq_tol(s21_ceil(-213.3), ceil(-213.3), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test3) {
  ck_assert_double_eq(s21_ceil(INFINITY), ceil(INFINITY));
}
END_TEST

START_TEST(s21_ceil_test4) {
  ck_assert_double_nan(s21_ceil(NAN));
  ck_assert_double_nan(ceil(NAN));
}
END_TEST

START_TEST(s21_ceil_test5) {
  ck_assert_double_eq(s21_ceil(-INFINITY), ceil(-INFINITY));
}
END_TEST

START_TEST(s21_ceil_test6) {
  ck_assert_double_eq_tol(s21_ceil(50), ceil(50), 0.000001);
}
END_TEST

/*

FLOOR TEST

*/

START_TEST(s21_floor_test1) {
  ck_assert_double_eq_tol(s21_floor(-0.8), floor(-0.8), 0.000001);
}
END_TEST

START_TEST(s21_floor_test2) {
  ck_assert_double_eq_tol(s21_floor(0.8), floor(0.8), 0.000001);
}
END_TEST

START_TEST(s21_floor_test3) {
  ck_assert_double_eq_tol(s21_floor(-10.23), floor(-10.23), 0.000001);
}
END_TEST

START_TEST(s21_floor_test4) {
  ck_assert_double_eq(s21_floor(INFINITY), floor(INFINITY));
}
END_TEST

START_TEST(s21_floor_test5) {
  ck_assert_double_nan(s21_floor(NAN));
  ck_assert_double_nan(floor(NAN));
}
END_TEST

START_TEST(s21_floor_test6) {
  ck_assert_double_eq(s21_floor(-INFINITY), floor(-INFINITY));
}
END_TEST

START_TEST(s21_floor_test7) {
  ck_assert_double_eq_tol(s21_floor(-1200), floor(-1200), 0.000001);
}
END_TEST

/*

FABS TEST

*/

START_TEST(s21_fabs_test1) {
  ck_assert_double_eq_tol(s21_fabs(568.36), fabs(568.36), 0.000001);
}
END_TEST

START_TEST(s21_fabs_test2) {
  ck_assert_double_eq_tol(s21_fabs(-14720.5689), fabs(-14720.5689), 0.000001);
}
END_TEST

START_TEST(s21_fabs_test3) {
  ck_assert_double_eq(s21_fabs(INFINITY), fabs(INFINITY));
}
END_TEST

START_TEST(s21_fabs_test4) {
  ck_assert_double_nan(s21_fabs(NAN));
  ck_assert_double_nan(fabs(NAN));
}
END_TEST

START_TEST(s21_fabs_test5) {
  ck_assert_double_eq(s21_fabs(-INFINITY), fabs(-INFINITY));
}
END_TEST

/*

SQRT TEST

*/

START_TEST(s21_sqrt_test1) {
  ck_assert_double_nan(s21_sqrt(-0.01));
  ck_assert_double_nan(sqrt(-0.01));
}
END_TEST

START_TEST(s21_sqrt_test2) {
  ck_assert_double_eq(s21_sqrt(INFINITY), sqrt(INFINITY));
}
END_TEST

START_TEST(s21_sqrt_test3) {
  ck_assert_double_nan(s21_sqrt(NAN));
  ck_assert_double_nan(sqrt(NAN));
}
END_TEST

START_TEST(s21_sqrt_test4) {
  ck_assert_double_nan(s21_sqrt(-INFINITY));
  ck_assert_double_nan(sqrt(-INFINITY));
}
END_TEST

START_TEST(s21_sqrt_test5) {
  ck_assert_double_nan(s21_sqrt(-231.41));
  ck_assert_double_nan(sqrt(-231.41));
}
END_TEST

START_TEST(s21_sqrt_test6) {
  long double arr[] = {5898.467, 8427.928,  5698.0035, 1289.244, 7025.7,
                       12.1357,  4745.5,    2930.637,  8187.391, 1015.89,
                       3155.844, 3954.143,  2862.1,    2782.954, 5097.545,
                       2630.4,   1075.747,  1889.786,  1782,     0.0001,
                       21345678, 7432,      0.3245,    12345,    13456,
                       0.03213,  324.42342, 0,         50,       0.24};
  for (int i = 0; i < 30; i++) {
    ck_assert_double_eq_tol(s21_sqrt(arr[i]), sqrt(arr[i]), 0.000001);
  }
}

/*

ATAN TEST

*/

START_TEST(s21_atan_test1) {
  long double arr[] = {14.96, -25.1235, 0.23464, 0, 1, -1};
  for (int i = 0; i < 6; i++)
    ck_assert_double_eq_tol(s21_atan(arr[i]), atan(arr[i]), 0.000001);
}
END_TEST

START_TEST(s21_atan_test2) {
  ck_assert_double_eq(s21_atan(INFINITY), atan(INFINITY));
}
END_TEST

START_TEST(s21_atan_test3) {
  ck_assert_double_nan(s21_atan(NAN));
  ck_assert_double_nan(atan(NAN));
}
END_TEST

START_TEST(s21_atan_test4) {
  ck_assert_double_eq(s21_atan(-INFINITY), atan(-INFINITY));
}
END_TEST

/*

ASIN TEST

*/

START_TEST(s21_asin_test1) {
  ck_assert_double_eq_tol(s21_asin(0.156), asin(0.156), 0.000001);
}
END_TEST

START_TEST(s21_asin_test2) {
  ck_assert_double_eq_tol(s21_asin(1), asin(1), 0.000001);
}
END_TEST

START_TEST(s21_asin_test3) {
  ck_assert_double_eq_tol(s21_asin(-1), asin(-1), 0.000001);
}
END_TEST

START_TEST(s21_asin_test4) {
  ck_assert_double_nan(s21_asin(INFINITY));
  ck_assert_double_nan(asin(INFINITY));
}
END_TEST

START_TEST(s21_asin_test5) {
  ck_assert_double_nan(s21_asin(NAN));
  ck_assert_double_nan(asin(NAN));
}
END_TEST

START_TEST(s21_asin_test6) {
  ck_assert_double_nan(s21_asin(-INFINITY));
  ck_assert_double_nan(asin(-INFINITY));
}
END_TEST

START_TEST(s21_asin_test7) {
  ck_assert_double_nan(s21_asin(16));
  ck_assert_double_nan(asin(16));
}
END_TEST

START_TEST(s21_asin_test8) {
  ck_assert_double_nan(s21_asin(-16));
  ck_assert_double_nan(asin(-16));
}
END_TEST

START_TEST(s21_asin_test9) {
  ck_assert_double_eq_tol(s21_asin(0), asin(0), 0.000001);
}
END_TEST

/*

ACOS TEST

*/

START_TEST(s21_acos_test1) {
  ck_assert_double_eq_tol(s21_acos(0), acos(0), 0.000001);
}
END_TEST

START_TEST(s21_acos_test2) {
  ck_assert_double_eq_tol(s21_acos(-0.369), acos(-0.369), 0.000001);
}
END_TEST

START_TEST(s21_acos_test3) {
  ck_assert_double_eq_tol(s21_acos(-1), acos(-1), 0.000001);
}
END_TEST

START_TEST(s21_acos_test4) {
  ck_assert_double_nan(s21_acos(INFINITY));
  ck_assert_double_nan(acos(INFINITY));
}
END_TEST

START_TEST(s21_acos_test5) {
  ck_assert_double_nan(s21_acos(NAN));
  ck_assert_double_nan(acos(NAN));
}
END_TEST

START_TEST(s21_acos_test6) {
  ck_assert_double_nan(s21_acos(-INFINITY));
  ck_assert_double_nan(acos(-INFINITY));
}
END_TEST

START_TEST(s21_acos_test7) {
  ck_assert_double_nan(s21_acos(16));
  ck_assert_double_nan(acos(16));
}
END_TEST

START_TEST(s21_acos_test8) {
  ck_assert_double_nan(s21_acos(-16));
  ck_assert_double_nan(acos(-16));
}
END_TEST

START_TEST(s21_acos_test9) {
  ck_assert_double_eq_tol(s21_acos(1), acos(1), 0.000001);
}
END_TEST

/*

SIN TEST

*/

START_TEST(s21_sin_test1) {
  ck_assert_double_eq_tol(s21_sin(1000000), sin(1000000), 0.000001);
}
END_TEST

START_TEST(s21_sin_test2) {
  ck_assert_double_eq_tol(s21_sin(-14.96), sin(-14.96), 0.000001);
}
END_TEST

START_TEST(s21_sin_test3) {
  ck_assert_double_nan(s21_sin(INFINITY));
  ck_assert_double_nan(sin(INFINITY));
}
END_TEST

START_TEST(s21_sin_test4) {
  ck_assert_double_nan(s21_sin(NAN));
  ck_assert_double_nan(sin(NAN));
}
END_TEST

START_TEST(s21_sin_test5) {
  ck_assert_double_nan(s21_sin(-INFINITY));
  ck_assert_double_nan(sin(-INFINITY));
}
END_TEST

START_TEST(s21_sin_test6) {
  ck_assert_double_eq_tol(s21_sin(M_PI), sin(M_PI), 0.000001);
}
END_TEST

START_TEST(s21_sin_test7) {
  ck_assert_double_eq_tol(s21_sin(M_PI_2), sin(M_PI_2), 0.000001);
}
END_TEST

START_TEST(s21_sin_test8) {
  ck_assert_double_eq_tol(s21_sin(0), sin(0), 0.000001);
}
END_TEST

START_TEST(s21_sin_test9) {
  ck_assert_double_eq_tol(s21_sin(-M_PI_2), sin(-M_PI_2), 0.000001);
}
END_TEST

/*

COS TEST

*/

START_TEST(s21_cos_test1) {
  ck_assert_double_eq_tol(s21_cos(1200000), cos(1200000), 0.000001);
}
END_TEST

START_TEST(s21_cos_test2) {
  ck_assert_double_eq_tol(s21_cos(-14.96), cos(-14.96), 0.000001);
}
END_TEST

START_TEST(s21_cos_test3) {
  ck_assert_double_nan(s21_cos(INFINITY));
  ck_assert_double_nan(cos(INFINITY));
}
END_TEST

START_TEST(s21_cos_test4) {
  ck_assert_double_nan(s21_cos(NAN));
  ck_assert_double_nan(cos(NAN));
}
END_TEST

START_TEST(s21_cos_test5) {
  ck_assert_double_nan(s21_cos(-INFINITY));
  ck_assert_double_nan(cos(-INFINITY));
}
END_TEST

START_TEST(s21_cos_test6) {
  ck_assert_double_eq_tol(s21_cos(0), cos(0), 0.000001);
}
END_TEST

START_TEST(s21_cos_test7) {
  ck_assert_double_eq_tol(s21_cos(M_PI_2), cos(M_PI_2), 0.000001);
}
END_TEST

START_TEST(s21_cos_test8) {
  ck_assert_double_eq_tol(s21_cos(-M_PI_2), cos(-M_PI_2), 0.000001);
}
END_TEST

START_TEST(s21_cos_test9) {
  ck_assert_double_eq_tol(s21_cos(M_PI), cos(M_PI), 0.000001);
}
END_TEST

/*

TAN TEST

*/

START_TEST(s21_tan_test1) {
  ck_assert_double_eq_tol(s21_tan(6987000), tan(6987000), 0.000001);
}
END_TEST

START_TEST(s21_tan_test2) {
  ck_assert_double_eq_tol(s21_tan(-14.96), tan(-14.96), 0.000001);
}
END_TEST

START_TEST(s21_tan_test3) {
  ck_assert_double_nan(s21_tan(INFINITY));
  ck_assert_double_nan(tan(INFINITY));
}
END_TEST

START_TEST(s21_tan_test4) {
  ck_assert_double_nan(s21_tan(NAN));
  ck_assert_double_nan(tan(NAN));
}
END_TEST

START_TEST(s21_tan_test5) {
  ck_assert_double_nan(s21_tan(-INFINITY));
  ck_assert_double_nan(tan(-INFINITY));
}
END_TEST

START_TEST(s21_tan_test6) {
  ck_assert_double_eq_tol(s21_tan(0), tan(0), 0.000001);
}
END_TEST

START_TEST(s21_tan_test7) {
  ck_assert_double_eq_tol(s21_tan(M_PI), tan(M_PI), 0.000001);
}
END_TEST

/*

EXP TEST

*/

START_TEST(s21_exp_test1) {
  ck_assert_double_eq(s21_exp(25048.369), exp(25048.369));
}
END_TEST

START_TEST(s21_exp_test2) {
  ck_assert_double_eq_tol(s21_exp(-14.96), exp(-14.96), 0.000001);
}
END_TEST

START_TEST(s21_exp_test3) {
  ck_assert_double_eq(s21_exp(INFINITY), exp(INFINITY));
}
END_TEST

START_TEST(s21_exp_test4) {
  ck_assert_double_nan(s21_exp(NAN));
  ck_assert_double_nan(exp(NAN));
}
END_TEST

START_TEST(s21_exp_test5) {
  ck_assert_double_eq(s21_exp(-INFINITY), exp(-INFINITY));
}
END_TEST

START_TEST(s21_exp_test6) {
  ck_assert_double_eq_tol(s21_exp(0), exp(0), 0.000001);
}
END_TEST

START_TEST(s21_exp_test7) {
  ck_assert_double_eq_tol(s21_exp(1), exp(1), 0.000001);
}
END_TEST

START_TEST(s21_exp_test8) {
  ck_assert_double_eq_tol(s21_exp(-1), exp(-1), 0.000001);
}
END_TEST

/*

LOG TEST

*/

START_TEST(s21_log_test1) {
  ck_assert_double_eq_tol(s21_log(26941.289), log(26941.289), 0.000001);
}
END_TEST

START_TEST(s21_log_test2) {
  ck_assert_double_nan(s21_log(-12.36));
  ck_assert_double_nan(log(-12.36));
}
END_TEST

START_TEST(s21_log_test3) {
  ck_assert_double_eq(s21_log(INFINITY), log(INFINITY));
}
END_TEST

START_TEST(s21_log_test4) {
  ck_assert_double_nan(s21_log(NAN));
  ck_assert_double_nan(log(NAN));
}
END_TEST

START_TEST(s21_log_test5) {
  ck_assert_double_nan(s21_log(-INFINITY));
  ck_assert_double_nan(log(-INFINITY));
}
END_TEST

START_TEST(s21_log_test6) { ck_assert_double_eq(s21_log(0), log(0)); }
END_TEST

START_TEST(s21_log_test7) { ck_assert_double_eq(s21_log(1), log(1)); }
END_TEST

/*

FMOD TEST

*/

START_TEST(s21_fmod_test1) {
  ck_assert_double_nan(s21_fmod(NAN, NAN));
  ck_assert_double_nan(fmod(NAN, NAN));
}
END_TEST

START_TEST(s21_fmod_test2) {
  ck_assert_double_nan(s21_fmod(-INFINITY, -INFINITY));
  ck_assert_double_nan(fmod(-INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test3) {
  ck_assert_double_nan(s21_fmod(-INFINITY, INFINITY));
  ck_assert_double_nan(fmod(-INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test4) {
  ck_assert_double_nan(s21_fmod(INFINITY, INFINITY));
  ck_assert_double_nan(fmod(INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test5) {
  ck_assert_double_nan(s21_fmod(NAN, INFINITY));
  ck_assert_double_nan(fmod(NAN, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test6) {
  ck_assert_double_nan(s21_fmod(-INFINITY, NAN));
  ck_assert_double_nan(fmod(-INFINITY, NAN));
}
END_TEST

START_TEST(s21_fmod_test7) {
  ck_assert_double_nan(s21_fmod(NAN, -INFINITY));
  ck_assert_double_nan(fmod(NAN, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test8) {
  ck_assert_double_nan(s21_fmod(INFINITY, NAN));
  ck_assert_double_nan(fmod(INFINITY, NAN));
}
END_TEST

START_TEST(s21_fmod_test9) {
  ck_assert_double_nan(s21_fmod(INFINITY, -INFINITY));
  ck_assert_double_nan(fmod(INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test10) {
  ck_assert_double_nan(s21_fmod(INFINITY, 3));
  ck_assert_double_nan(fmod(INFINITY, 3));
}
END_TEST

START_TEST(s21_fmod_test11) {
  ck_assert_double_nan(s21_fmod(-INFINITY, 2));
  ck_assert_double_nan(fmod(-INFINITY, 2));
}
END_TEST

START_TEST(s21_fmod_test12) {
  ck_assert_double_nan(s21_fmod(NAN, 1));
  ck_assert_double_nan(fmod(NAN, 1));
}
END_TEST

START_TEST(s21_fmod_test13) {
  ck_assert_double_eq(s21_fmod(100, INFINITY), fmod(100, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test14) {
  ck_assert_double_eq(s21_fmod(100, -INFINITY), fmod(100, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test15) {
  ck_assert_double_eq(s21_fmod(0, INFINITY), fmod(0, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test16) {
  ck_assert_double_eq(s21_fmod(0, -INFINITY), fmod(0, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test17) {
  ck_assert_double_nan(s21_fmod(0, NAN));
  ck_assert_double_nan(fmod(0, NAN));
}
END_TEST

START_TEST(s21_fmod_test18) {
  ck_assert_double_nan(s21_fmod(INFINITY, 0));
  ck_assert_double_nan(fmod(INFINITY, 0));
}
END_TEST

START_TEST(s21_fmod_test19) {
  ck_assert_double_nan(s21_fmod(-INFINITY, 0));
  ck_assert_double_nan(fmod(-INFINITY, 0));
}
END_TEST

START_TEST(s21_fmod_test20) {
  ck_assert_double_nan(s21_fmod(NAN, 0));
  ck_assert_double_nan(fmod(NAN, 0));
}
END_TEST

START_TEST(s21_fmod_MAIN_test) {
  long double f_value[] = {4234, 20,      234,    -756,   435,    24.342, 345,
                           645,  2.24234, 53.534, 6456,   1,      0,      -1,
                           34,   64,      9786,   534.53, 756.56, 754};
  long double s_value[] = {8898.07,  6881.63, 1537.52, 5783.31, 2675.7,
                           5560.06,  1240.69, 9348.66, 103.02,  4153.9,
                           250,      29.3,    96.456,  86,      29.5,
                           302.0234, 1,       1947.38, 953,     42};
  for (int i = 0; i < 20; i++) {
    ck_assert_double_eq_tol(s21_fmod(f_value[i], s_value[i]),
                            fmod(f_value[i], s_value[i]), 0.000001);
  }
}

/*

FUCTORIAL TEST

*/

START_TEST(s21_fuctorial_test) {
  long double fuct_arr[] = {7, 1, 0, 11, 5};
  long double fuct_ans_arr[] = {5040, 1, 1, 39916800, 120};

  for (int i = 0; i < 5; i++)
    ck_assert_double_eq(s21_fuctorial(fuct_arr[i]), fuct_ans_arr[i]);
}
END_TEST

/*

POW TEST

*/

START_TEST(s21_pow_test1) {
  ck_assert_double_eq_tol(s21_pow(20, 0.4), pow(20, 0.4), 0.000001);
}
END_TEST

START_TEST(s21_pow_test2) {
  ck_assert_double_nan(s21_pow(-20, 0.4));
  ck_assert_double_nan(pow(-20, 0.4));
}
END_TEST

START_TEST(s21_pow_test3) {
  ck_assert_double_eq(s21_pow(INFINITY, INFINITY), pow(INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_pow_test4) {
  ck_assert_double_eq(s21_pow(-INFINITY, -INFINITY), pow(-INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test5) {
  ck_assert_double_nan(s21_pow(NAN, NAN));
  ck_assert_double_nan(pow(NAN, NAN));
}
END_TEST

START_TEST(s21_pow_test6) {
  ck_assert_double_nan(s21_pow(INFINITY, NAN));
  ck_assert_double_nan(pow(INFINITY, NAN));
}
END_TEST

START_TEST(s21_pow_test7) {
  ck_assert_double_nan(s21_pow(NAN, INFINITY));
  ck_assert_double_nan(pow(NAN, INFINITY));
}
END_TEST

START_TEST(s21_pow_test8) {
  ck_assert_double_nan(s21_pow(-INFINITY, NAN));
  ck_assert_double_nan(pow(-INFINITY, NAN));
}
END_TEST

START_TEST(s21_pow_test9) {
  ck_assert_double_nan(s21_pow(NAN, -INFINITY));
  ck_assert_double_nan(pow(NAN, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test10) {
  ck_assert_double_eq(s21_pow(-INFINITY, INFINITY), pow(-INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_pow_test11) {
  ck_assert_double_eq(s21_pow(INFINITY, -INFINITY), pow(INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test12) {
  ck_assert_double_eq_tol(s21_pow(12.69, 0), pow(12.69, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test13) {
  ck_assert_double_eq_tol(s21_pow(-20.63, 3), pow(-20.63, 3), 0.000001);
}
END_TEST

START_TEST(s21_pow_test14) {
  ck_assert_double_eq_tol(s21_pow(-20.63, 6), pow(-20.63, 6), 0.000001);
}
END_TEST

START_TEST(s21_pow_test15) {
  ck_assert_double_eq_tol(s21_pow(-INFINITY, 0), pow(-INFINITY, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test16) {
  ck_assert_double_eq_tol(s21_pow(INFINITY, 0), pow(INFINITY, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test17) {
  ck_assert_double_eq_tol(s21_pow(NAN, 0), pow(NAN, 0), 0.000001);
}
END_TEST

START_TEST(s21_pow_test18) {
  ck_assert_double_eq(s21_pow(0, -INFINITY), pow(0, -INFINITY));
}
END_TEST

START_TEST(s21_pow_test19) {
  ck_assert_double_eq_tol(s21_pow(0, INFINITY), pow(0, INFINITY), 0.000001);
}
END_TEST

START_TEST(s21_pow_test20) {
  ck_assert_double_nan(s21_pow(0, NAN));
  ck_assert_double_nan(pow(0, NAN));
}
END_TEST

START_TEST(s21_pow_test21) { ck_assert_double_eq(s21_pow(0, 0), pow(0, 0)); }
END_TEST

START_TEST(s21_pow_test22) {
  ck_assert_double_eq(s21_pow(16894.2629, 1545), pow(16894.2629, 1545));
}
END_TEST

START_TEST(s21_pow_test23) {
  ck_assert_double_eq(s21_pow(16894.2629, -1545), pow(16894.2629, -1545));
}
END_TEST

START_TEST(s21_pow_test24) {
  ck_assert_double_eq(s21_pow(-16894.2629, 1545), pow(-16894.2629, 1545));
}
END_TEST

START_TEST(s21_pow_test25) {
  ck_assert_double_eq(s21_pow(-16894.2629, -1545), pow(-16894.2629, -1545));
}
END_TEST

Suite *abs_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("abs(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_abs_test1);
  tcase_add_test(tc_core, s21_abs_test2);
  tcase_add_test(tc_core, s21_abs_test3);
  tcase_add_test(tc_core, s21_abs_test4);
  tcase_add_test(tc_core, s21_abs_test5);
  suite_add_tcase(s, tc_core);
  return s;
}

Suite *ceil_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("ceil(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_ceil_test1);
  tcase_add_test(tc_core, s21_ceil_test2);
  tcase_add_test(tc_core, s21_ceil_test3);
  tcase_add_test(tc_core, s21_ceil_test4);
  tcase_add_test(tc_core, s21_ceil_test5);
  tcase_add_test(tc_core, s21_ceil_test6);
  suite_add_tcase(s, tc_core);
  return s;
}

Suite *floor_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("floor(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_floor_test1);
  tcase_add_test(tc_core, s21_floor_test2);
  tcase_add_test(tc_core, s21_floor_test3);
  tcase_add_test(tc_core, s21_floor_test4);
  tcase_add_test(tc_core, s21_floor_test5);
  tcase_add_test(tc_core, s21_floor_test6);
  tcase_add_test(tc_core, s21_floor_test7);
  suite_add_tcase(s, tc_core);
  return s;
}

Suite *fabs_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("fabs(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_fabs_test1);
  tcase_add_test(tc_core, s21_fabs_test2);
  tcase_add_test(tc_core, s21_fabs_test3);
  tcase_add_test(tc_core, s21_fabs_test4);
  tcase_add_test(tc_core, s21_fabs_test5);
  suite_add_tcase(s, tc_core);
  return s;
}

Suite *sqrt_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("sqrt(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_sqrt_test1);
  tcase_add_test(tc_core, s21_sqrt_test2);
  tcase_add_test(tc_core, s21_sqrt_test3);
  tcase_add_test(tc_core, s21_sqrt_test4);
  tcase_add_test(tc_core, s21_sqrt_test5);
  tcase_add_test(tc_core, s21_sqrt_test6);

  suite_add_tcase(s, tc_core);
  return s;
}

Suite *atan_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("atan(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_atan_test1);
  tcase_add_test(tc_core, s21_atan_test2);
  tcase_add_test(tc_core, s21_atan_test3);
  tcase_add_test(tc_core, s21_atan_test4);
  suite_add_tcase(s, tc_core);
  return s;
}

Suite *asin_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("asin(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_asin_test1);
  tcase_add_test(tc_core, s21_asin_test2);
  tcase_add_test(tc_core, s21_asin_test3);
  tcase_add_test(tc_core, s21_asin_test4);
  tcase_add_test(tc_core, s21_asin_test5);
  tcase_add_test(tc_core, s21_asin_test6);
  tcase_add_test(tc_core, s21_asin_test7);
  tcase_add_test(tc_core, s21_asin_test8);
  tcase_add_test(tc_core, s21_asin_test9);
  suite_add_tcase(s, tc_core);
  return s;
}

Suite *acos_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("acos(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_acos_test1);
  tcase_add_test(tc_core, s21_acos_test2);
  tcase_add_test(tc_core, s21_acos_test3);
  tcase_add_test(tc_core, s21_acos_test4);
  tcase_add_test(tc_core, s21_acos_test5);
  tcase_add_test(tc_core, s21_acos_test6);
  tcase_add_test(tc_core, s21_acos_test7);
  tcase_add_test(tc_core, s21_acos_test8);
  tcase_add_test(tc_core, s21_acos_test9);
  suite_add_tcase(s, tc_core);
  return s;
}

Suite *sin_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("sin(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_sin_test1);
  tcase_add_test(tc_core, s21_sin_test2);
  tcase_add_test(tc_core, s21_sin_test3);
  tcase_add_test(tc_core, s21_sin_test4);
  tcase_add_test(tc_core, s21_sin_test5);
  tcase_add_test(tc_core, s21_sin_test6);
  tcase_add_test(tc_core, s21_sin_test7);
  tcase_add_test(tc_core, s21_sin_test8);
  tcase_add_test(tc_core, s21_sin_test9);
  suite_add_tcase(s, tc_core);
  return s;
}

Suite *fuct_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("fuctorial(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_fuctorial_test);
  suite_add_tcase(s, tc_core);
  return s;
}

Suite *cos_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("cos(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_cos_test1);
  tcase_add_test(tc_core, s21_cos_test2);
  tcase_add_test(tc_core, s21_cos_test3);
  tcase_add_test(tc_core, s21_cos_test4);
  tcase_add_test(tc_core, s21_cos_test5);
  tcase_add_test(tc_core, s21_cos_test6);
  tcase_add_test(tc_core, s21_cos_test7);
  tcase_add_test(tc_core, s21_cos_test8);
  tcase_add_test(tc_core, s21_cos_test9);
  suite_add_tcase(s, tc_core);
  return s;
}

Suite *tan_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("tan(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_tan_test1);
  tcase_add_test(tc_core, s21_tan_test2);
  tcase_add_test(tc_core, s21_tan_test3);
  tcase_add_test(tc_core, s21_tan_test4);
  tcase_add_test(tc_core, s21_tan_test5);
  tcase_add_test(tc_core, s21_tan_test6);
  tcase_add_test(tc_core, s21_tan_test7);
  suite_add_tcase(s, tc_core);
  return s;
}

Suite *exp_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("exp(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_exp_test1);
  tcase_add_test(tc_core, s21_exp_test2);
  tcase_add_test(tc_core, s21_exp_test3);
  tcase_add_test(tc_core, s21_exp_test4);
  tcase_add_test(tc_core, s21_exp_test5);
  tcase_add_test(tc_core, s21_exp_test6);
  tcase_add_test(tc_core, s21_exp_test7);
  tcase_add_test(tc_core, s21_exp_test8);
  suite_add_tcase(s, tc_core);
  return s;
}

Suite *log_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("log(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_log_test1);
  tcase_add_test(tc_core, s21_log_test2);
  tcase_add_test(tc_core, s21_log_test3);
  tcase_add_test(tc_core, s21_log_test4);
  tcase_add_test(tc_core, s21_log_test5);
  tcase_add_test(tc_core, s21_log_test6);
  tcase_add_test(tc_core, s21_log_test7);
  suite_add_tcase(s, tc_core);
  return s;
}

Suite *fmod_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("fmod(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_fmod_MAIN_test);
  tcase_add_test(tc_core, s21_fmod_test1);
  tcase_add_test(tc_core, s21_fmod_test2);
  tcase_add_test(tc_core, s21_fmod_test3);
  tcase_add_test(tc_core, s21_fmod_test4);
  tcase_add_test(tc_core, s21_fmod_test5);
  tcase_add_test(tc_core, s21_fmod_test6);
  tcase_add_test(tc_core, s21_fmod_test7);
  tcase_add_test(tc_core, s21_fmod_test8);
  tcase_add_test(tc_core, s21_fmod_test9);
  tcase_add_test(tc_core, s21_fmod_test10);
  tcase_add_test(tc_core, s21_fmod_test11);
  tcase_add_test(tc_core, s21_fmod_test12);
  tcase_add_test(tc_core, s21_fmod_test13);
  tcase_add_test(tc_core, s21_fmod_test14);
  tcase_add_test(tc_core, s21_fmod_test15);
  tcase_add_test(tc_core, s21_fmod_test16);
  tcase_add_test(tc_core, s21_fmod_test17);
  tcase_add_test(tc_core, s21_fmod_test18);
  tcase_add_test(tc_core, s21_fmod_test19);
  tcase_add_test(tc_core, s21_fmod_test20);
  suite_add_tcase(s, tc_core);
  return s;
}

Suite *pow_suite(void) {
  Suite *s;
  TCase *tc_core;
  s = suite_create("pow(x)");
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_pow_test1);
  tcase_add_test(tc_core, s21_pow_test2);
  tcase_add_test(tc_core, s21_pow_test3);
  tcase_add_test(tc_core, s21_pow_test4);
  tcase_add_test(tc_core, s21_pow_test5);
  tcase_add_test(tc_core, s21_pow_test6);
  tcase_add_test(tc_core, s21_pow_test7);
  tcase_add_test(tc_core, s21_pow_test8);
  tcase_add_test(tc_core, s21_pow_test9);
  tcase_add_test(tc_core, s21_pow_test10);
  tcase_add_test(tc_core, s21_pow_test11);
  tcase_add_test(tc_core, s21_pow_test12);
  tcase_add_test(tc_core, s21_pow_test13);
  tcase_add_test(tc_core, s21_pow_test14);
  tcase_add_test(tc_core, s21_pow_test15);
  tcase_add_test(tc_core, s21_pow_test16);
  tcase_add_test(tc_core, s21_pow_test17);
  tcase_add_test(tc_core, s21_pow_test18);
  tcase_add_test(tc_core, s21_pow_test19);
  tcase_add_test(tc_core, s21_pow_test20);
  tcase_add_test(tc_core, s21_pow_test21);
  tcase_add_test(tc_core, s21_pow_test22);
  tcase_add_test(tc_core, s21_pow_test23);
  tcase_add_test(tc_core, s21_pow_test24);
  tcase_add_test(tc_core, s21_pow_test25);
  suite_add_tcase(s, tc_core);
  return s;
}

void case_test(Suite *s, int *fail) {
  SRunner *runner = srunner_create(s);
  srunner_run_all(runner, CK_NORMAL);
  *fail = srunner_ntests_failed(runner);
  srunner_free(runner);
}

int main() {
  int fail = 0;
  case_test(abs_suite(), &fail);
  case_test(acos_suite(), &fail);
  case_test(asin_suite(), &fail);
  case_test(atan_suite(), &fail);
  case_test(ceil_suite(), &fail);
  case_test(cos_suite(), &fail);
  case_test(exp_suite(), &fail);
  case_test(fabs_suite(), &fail);
  case_test(floor_suite(), &fail);
  case_test(fmod_suite(), &fail);
  case_test(fuct_suite(), &fail);
  case_test(log_suite(), &fail);
  case_test(pow_suite(), &fail);
  case_test(sin_suite(), &fail);
  case_test(sqrt_suite(), &fail);
  case_test(tan_suite(), &fail);
  return fail;
}