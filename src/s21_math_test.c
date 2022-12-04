// #include "s21_math.h"

// #include <stdio.h>

// int main() { return 1; }
#include "s21_math.h"

#include <check.h>
#include <math.h>
#include <stdlib.h>

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

Suite *abs_suite(void) {
  Suite *s;  // объявление указателей на переменные набора и примера
  TCase *tc_core;
  s = suite_create("abs(x)");  // создание нового набора abs(x)
  tc_core = tcase_create("core");
  tcase_add_test(tc_core, s21_abs_test1);
  tcase_add_test(tc_core, s21_abs_test2);
  tcase_add_test(tc_core, s21_abs_test3);
  tcase_add_test(tc_core, s21_abs_test4);
  tcase_add_test(tc_core, s21_abs_test5);
  suite_add_tcase(s, tc_core);
  return s;
}

START_TEST(s21_ceil_test1) {
  ck_assert_double_eq_tol(s21_ceil(-0.8), ceil(-0.8), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test2) {
  ck_assert_double_eq_tol(s21_ceil(0.8), ceil(0.8), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test3) {
  ck_assert_double_eq_tol(s21_ceil(-10.23), ceil(-10.23), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test4) {
  ck_assert_double_eq(s21_ceil(INFINITY), ceil(INFINITY));
}
END_TEST

START_TEST(s21_ceil_test5) {
  ck_assert_double_nan(s21_ceil(NAN));
  ck_assert_double_nan(ceil(NAN));
}
END_TEST

START_TEST(s21_ceil_test6) {
  ck_assert_double_eq(s21_ceil(-INFINITY), ceil(-INFINITY));
}
END_TEST

START_TEST(s21_ceil_test7) {
  ck_assert_double_eq_tol(s21_ceil(1200), ceil(1200), 0.000001);
}
END_TEST

START_TEST(s21_ceil_test8) {
  ck_assert_double_eq_tol(s21_ceil(0), ceil(0), 0.000001);
}
END_TEST

Suite *ceil_suite(void) {
  Suite *s;  // объявление указателей на переменные набора и примера
  TCase *tc_core;
  s = suite_create("ceil(x)");  // создание нового набора abs(x)
  tc_core = tcase_create("core");  // создание нового тестового примера core
  tcase_add_test(tc_core,
                 s21_ceil_test1);  // добавление теста в тестовый пример
  tcase_add_test(tc_core, s21_ceil_test2);
  tcase_add_test(tc_core, s21_ceil_test3);
  tcase_add_test(tc_core, s21_ceil_test4);
  tcase_add_test(tc_core, s21_ceil_test5);
  tcase_add_test(tc_core, s21_ceil_test6);
  tcase_add_test(tc_core, s21_ceil_test7);
  tcase_add_test(tc_core, s21_ceil_test8);
  suite_add_tcase(s, tc_core);  // добавление тестового примера в набор
  return s;
}

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

Suite *floor_suite(void) {
  Suite *s;  // объявление указателей на переменные набора и примера
  TCase *tc_core;
  s = suite_create("floor(x)");  // создание нового набора abs(x)
  tc_core = tcase_create("core");  // создание нового тестового примера core
  tcase_add_test(tc_core,
                 s21_floor_test1);  // добавление теста в тестовый пример
  tcase_add_test(tc_core, s21_floor_test2);
  tcase_add_test(tc_core, s21_floor_test3);
  tcase_add_test(tc_core, s21_floor_test4);
  tcase_add_test(tc_core, s21_floor_test5);
  tcase_add_test(tc_core, s21_floor_test6);
  tcase_add_test(tc_core, s21_floor_test7);
  suite_add_tcase(s, tc_core);  // добавление тестового примера в набор
  return s;
}

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

Suite *fabs_suite(void) {
  Suite *s;  // объявление указателей на переменные набора и примера
  TCase *tc_core;
  s = suite_create("fabs(x)");  // создание нового набора abs(x)
  tc_core = tcase_create("core");  // создание нового тестового примера core
  tcase_add_test(tc_core,
                 s21_fabs_test1);  // добавление теста в тестовый пример
  tcase_add_test(tc_core, s21_fabs_test2);
  tcase_add_test(tc_core, s21_fabs_test3);
  tcase_add_test(tc_core, s21_fabs_test4);
  tcase_add_test(tc_core, s21_fabs_test5);
  suite_add_tcase(s, tc_core);  // добавление тестового примера в набор
  return s;
}

START_TEST(s21_sqrt_test1) {
  ck_assert_double_eq_tol(s21_sqrt(410), sqrt(410), 0.000001);
}
END_TEST

START_TEST(s21_sqrt_test2) {
  ck_assert_double_eq_tol(s21_sqrt(0.96), sqrt(0.96), 0.000001);
}
END_TEST

START_TEST(s21_sqrt_test3) {
  ck_assert_double_nan(s21_sqrt(-0.01));
  ck_assert_double_nan(sqrt(-0.01));
}
END_TEST

START_TEST(s21_sqrt_test4) {
  ck_assert_double_eq(s21_sqrt(INFINITY), sqrt(INFINITY));
}
END_TEST

START_TEST(s21_sqrt_test5) {
  ck_assert_double_nan(s21_sqrt(NAN));
  ck_assert_double_nan(sqrt(NAN));
}
END_TEST

START_TEST(s21_sqrt_test6) {
  ck_assert_double_nan(s21_sqrt(-INFINITY));
  ck_assert_double_nan(sqrt(-INFINITY));
}
END_TEST

START_TEST(s21_sqrt_test7) {
  ck_assert_double_eq_tol(s21_sqrt(0), sqrt(0), 0.000001);
}
END_TEST

Suite *sqrt_suite(void) {
  Suite *s;  // объявление указателей на переменные набора и примера
  TCase *tc_core;
  s = suite_create("sqrt(x)");  // создание нового набора abs(x)
  tc_core = tcase_create("core");  // создание нового тестового примера core
  tcase_add_test(tc_core,
                 s21_sqrt_test1);  // добавление теста в тестовый пример
  tcase_add_test(tc_core, s21_sqrt_test2);
  tcase_add_test(tc_core, s21_sqrt_test3);
  tcase_add_test(tc_core, s21_sqrt_test4);
  tcase_add_test(tc_core, s21_sqrt_test5);
  tcase_add_test(tc_core, s21_sqrt_test6);
  tcase_add_test(tc_core, s21_sqrt_test7);
  suite_add_tcase(s, tc_core);  // добавление тестового примера в набор
  return s;
}

START_TEST(s21_atan_test1) {
  ck_assert_double_eq_tol(s21_atan(14.96), atan(14.96), 0.000001);
}
END_TEST

START_TEST(s21_atan_test2) {
  ck_assert_double_eq_tol(s21_atan(-25.4446), atan(-25.4446), 0.000001);
}
END_TEST

START_TEST(s21_atan_test3) {
  ck_assert_double_eq_tol(s21_atan(0.2598), atan(0.2598), 0.000001);
}
END_TEST

START_TEST(s21_atan_test4) {
  ck_assert_double_eq(s21_atan(INFINITY), atan(INFINITY));
}
END_TEST

START_TEST(s21_atan_test5) {
  ck_assert_double_nan(s21_atan(NAN));
  ck_assert_double_nan(atan(NAN));
}
END_TEST

START_TEST(s21_atan_test6) {
  ck_assert_double_eq(s21_atan(-INFINITY), atan(-INFINITY));
}
END_TEST

START_TEST(s21_atan_test7) {
  ck_assert_double_eq_tol(s21_atan(0), atan(0), 0.000001);
}
END_TEST

START_TEST(s21_atan_test8) {
  ck_assert_double_eq_tol(s21_atan(1), atan(1), 0.000001);
}
END_TEST

START_TEST(s21_atan_test9) {
  ck_assert_double_eq_tol(s21_atan(-1), atan(-1), 0.000001);
}
END_TEST

Suite *atan_suite(void) {
  Suite *s;  // объявление указателей на переменные набора и примера
  TCase *tc_core;
  s = suite_create("atan(x)");  // создание нового набора abs(x)
  tc_core = tcase_create("core");  // создание нового тестового примера core
  tcase_add_test(tc_core,
                 s21_atan_test1);  // добавление теста в тестовый пример
  tcase_add_test(tc_core, s21_atan_test2);
  tcase_add_test(tc_core, s21_atan_test3);
  tcase_add_test(tc_core, s21_atan_test4);
  tcase_add_test(tc_core, s21_atan_test5);
  tcase_add_test(tc_core, s21_atan_test6);
  tcase_add_test(tc_core, s21_atan_test7);
  tcase_add_test(tc_core, s21_atan_test8);
  tcase_add_test(tc_core, s21_atan_test9);
  suite_add_tcase(s, tc_core);  // добавление тестового примера в набор
  return s;
}

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

Suite *asin_suite(void) {
  Suite *s;  // объявление указателей на переменные набора и примера
  TCase *tc_core;
  s = suite_create("asin(x)");  // создание нового набора abs(x)
  tc_core = tcase_create("core");  // создание нового тестового примера core
  tcase_add_test(tc_core,
                 s21_asin_test1);  // добавление теста в тестовый пример
  tcase_add_test(tc_core, s21_asin_test2);
  tcase_add_test(tc_core, s21_asin_test3);
  tcase_add_test(tc_core, s21_asin_test4);
  tcase_add_test(tc_core, s21_asin_test5);
  tcase_add_test(tc_core, s21_asin_test6);
  tcase_add_test(tc_core, s21_asin_test7);
  tcase_add_test(tc_core, s21_asin_test8);
  tcase_add_test(tc_core, s21_asin_test9);
  suite_add_tcase(s, tc_core);  // добавление тестового примера в набор
  return s;
}

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

Suite *acos_suite(void) {
  Suite *s;  // объявление указателей на переменные набора и примера
  TCase *tc_core;
  s = suite_create("acos(x)");  // создание нового набора abs(x)
  tc_core = tcase_create("core");  // создание нового тестового примера core
  tcase_add_test(tc_core,
                 s21_acos_test1);  // добавление теста в тестовый пример
  tcase_add_test(tc_core, s21_acos_test2);
  tcase_add_test(tc_core, s21_acos_test3);
  tcase_add_test(tc_core, s21_acos_test4);
  tcase_add_test(tc_core, s21_acos_test5);
  tcase_add_test(tc_core, s21_acos_test6);
  tcase_add_test(tc_core, s21_acos_test7);
  tcase_add_test(tc_core, s21_acos_test8);
  tcase_add_test(tc_core, s21_acos_test9);
  suite_add_tcase(s, tc_core);  // добавление тестового примера в набор
  return s;
}

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

Suite *sin_suite(void) {
  Suite *s;  // объявление указателей на переменные набора и примера
  TCase *tc_core;
  s = suite_create("sin(x)");  // создание нового набора abs(x)
  tc_core = tcase_create("core");  // создание нового тестового примера core
  tcase_add_test(tc_core, s21_sin_test1);  // добавление теста в тестовый пример
  tcase_add_test(tc_core, s21_sin_test2);
  tcase_add_test(tc_core, s21_sin_test3);
  tcase_add_test(tc_core, s21_sin_test4);
  tcase_add_test(tc_core, s21_sin_test5);
  tcase_add_test(tc_core, s21_sin_test6);
  tcase_add_test(tc_core, s21_sin_test7);
  tcase_add_test(tc_core, s21_sin_test8);
  tcase_add_test(tc_core, s21_sin_test9);
  suite_add_tcase(s, tc_core);  // добавление тестового примера в набор
  return s;
}

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

Suite *cos_suite(void) {
  Suite *s;  // объявление указателей на переменные набора и примера
  TCase *tc_core;
  s = suite_create("cos(x)");  // создание нового набора abs(x)
  tc_core = tcase_create("core");  // создание нового тестового примера core
  tcase_add_test(tc_core, s21_cos_test1);  // добавление теста в тестовый пример
  tcase_add_test(tc_core, s21_cos_test2);
  tcase_add_test(tc_core, s21_cos_test3);
  tcase_add_test(tc_core, s21_cos_test4);
  tcase_add_test(tc_core, s21_cos_test5);
  tcase_add_test(tc_core, s21_cos_test6);
  tcase_add_test(tc_core, s21_cos_test7);
  tcase_add_test(tc_core, s21_cos_test8);
  tcase_add_test(tc_core, s21_cos_test9);
  suite_add_tcase(s, tc_core);  // добавление тестового примера в набор
  return s;
}

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

Suite *tan_suite(void) {
  Suite *s;  // объявление указателей на переменные набора и примера
  TCase *tc_core;
  s = suite_create("tan(x)");  // создание нового набора abs(x)
  tc_core = tcase_create("core");  // создание нового тестового примера core
  tcase_add_test(tc_core, s21_tan_test1);  // добавление теста в тестовый пример
  tcase_add_test(tc_core, s21_tan_test2);
  tcase_add_test(tc_core, s21_tan_test3);
  tcase_add_test(tc_core, s21_tan_test4);
  tcase_add_test(tc_core, s21_tan_test5);
  tcase_add_test(tc_core, s21_tan_test6);
  tcase_add_test(tc_core, s21_tan_test7);
  suite_add_tcase(s, tc_core);  // добавление тестового примера в набор
  return s;
}

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

Suite *exp_suite(void) {
  Suite *s;  // объявление указателей на переменные набора и примера
  TCase *tc_core;
  s = suite_create("exp(x)");  // создание нового набора abs(x)
  tc_core = tcase_create("core");  // создание нового тестового примера core
  tcase_add_test(tc_core, s21_exp_test1);  // добавление теста в тестовый пример
  tcase_add_test(tc_core, s21_exp_test2);
  tcase_add_test(tc_core, s21_exp_test3);
  tcase_add_test(tc_core, s21_exp_test4);
  tcase_add_test(tc_core, s21_exp_test5);
  tcase_add_test(tc_core, s21_exp_test6);
  tcase_add_test(tc_core, s21_exp_test7);
  tcase_add_test(tc_core, s21_exp_test8);
  suite_add_tcase(s, tc_core);  // добавление тестового примера в набор
  return s;
}

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

Suite *log_suite(void) {
  Suite *s;  // объявление указателей на переменные набора и примера
  TCase *tc_core;
  s = suite_create("log(x)");  // создание нового набора abs(x)
  tc_core = tcase_create("core");  // создание нового тестового примера core
  tcase_add_test(tc_core, s21_log_test1);  // добавление теста в тестовый пример
  tcase_add_test(tc_core, s21_log_test2);
  tcase_add_test(tc_core, s21_log_test3);
  tcase_add_test(tc_core, s21_log_test4);
  tcase_add_test(tc_core, s21_log_test5);
  tcase_add_test(tc_core, s21_log_test6);
  tcase_add_test(tc_core, s21_log_test7);
  suite_add_tcase(s, tc_core);  // добавление тестового примера в набор
  return s;
}

START_TEST(s21_fmod_test1) {
  ck_assert_double_eq_tol(s21_fmod(20, 6984), fmod(20, 6984), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test2) {
  ck_assert_double_eq_tol(s21_fmod(-20, 2.365), fmod(-20, 2.365), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test3) {
  ck_assert_double_nan(s21_fmod(INFINITY, INFINITY));
  ck_assert_double_nan(fmod(INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test4) {
  ck_assert_double_nan(s21_fmod(-INFINITY, -INFINITY));
  ck_assert_double_nan(fmod(-INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test5) {
  ck_assert_double_nan(s21_fmod(NAN, NAN));
  ck_assert_double_nan(fmod(NAN, NAN));
}
END_TEST

START_TEST(s21_fmod_test6) {
  ck_assert_double_nan(s21_fmod(INFINITY, NAN));
  ck_assert_double_nan(fmod(INFINITY, NAN));
}
END_TEST

START_TEST(s21_fmod_test7) {
  ck_assert_double_nan(s21_fmod(NAN, INFINITY));
  ck_assert_double_nan(fmod(NAN, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test8) {
  ck_assert_double_nan(s21_fmod(-INFINITY, NAN));
  ck_assert_double_nan(fmod(-INFINITY, NAN));
}
END_TEST

START_TEST(s21_fmod_test9) {
  ck_assert_double_nan(s21_fmod(NAN, -INFINITY));
  ck_assert_double_nan(fmod(NAN, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test10) {
  ck_assert_double_nan(s21_fmod(-INFINITY, INFINITY));
  ck_assert_double_nan(fmod(-INFINITY, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test11) {
  ck_assert_double_nan(s21_fmod(INFINITY, -INFINITY));
  ck_assert_double_nan(fmod(INFINITY, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test12) {
  ck_assert_double_nan(s21_fmod(12.69, 0));
  ck_assert_double_nan(fmod(12.69, 0));
}
END_TEST

START_TEST(s21_fmod_test13) {
  ck_assert_double_eq_tol(s21_fmod(-20, 1), fmod(-20, 1), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test14) {
  ck_assert_double_eq_tol(s21_fmod(0, 1.63), fmod(0, 1.63), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test15) {
  ck_assert_double_eq_tol(s21_fmod(-20, 6), fmod(-20, 6), 0.000001);
}
END_TEST

START_TEST(s21_fmod_test16) {
  ck_assert_double_nan(s21_fmod(INFINITY, 5));
  ck_assert_double_nan(fmod(INFINITY, 5));
}
END_TEST

START_TEST(s21_fmod_test17) {
  ck_assert_double_nan(s21_fmod(-INFINITY, 5));
  ck_assert_double_nan(fmod(-INFINITY, 5));
}
END_TEST

START_TEST(s21_fmod_test18) {
  ck_assert_double_nan(s21_fmod(NAN, 5));
  ck_assert_double_nan(fmod(NAN, 5));
}
END_TEST

START_TEST(s21_fmod_test19) {
  ck_assert_double_eq(s21_fmod(5, INFINITY), fmod(5, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test20) {
  ck_assert_double_eq(s21_fmod(5, -INFINITY), fmod(5, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test21) {
  ck_assert_double_nan(s21_fmod(5, NAN));
  ck_assert_double_nan(fmod(5, NAN));
}
END_TEST

START_TEST(s21_fmod_test22) {
  ck_assert_double_eq(s21_fmod(0, INFINITY), fmod(0, INFINITY));
}
END_TEST

START_TEST(s21_fmod_test23) {
  ck_assert_double_eq(s21_fmod(0, -INFINITY), fmod(0, -INFINITY));
}
END_TEST

START_TEST(s21_fmod_test24) {
  ck_assert_double_nan(s21_fmod(0, NAN));
  ck_assert_double_nan(fmod(0, NAN));
}
END_TEST

START_TEST(s21_fmod_test25) {
  ck_assert_double_nan(s21_fmod(INFINITY, 0));
  ck_assert_double_nan(fmod(INFINITY, 0));
}
END_TEST

START_TEST(s21_fmod_test26) {
  ck_assert_double_nan(s21_fmod(-INFINITY, 0));
  ck_assert_double_nan(fmod(-INFINITY, 0));
}
END_TEST

START_TEST(s21_fmod_test27) {
  ck_assert_double_nan(s21_fmod(NAN, 0));
  ck_assert_double_nan(fmod(NAN, 0));
}
END_TEST

START_TEST(s21_fmod_test28) {
  ck_assert_double_nan(s21_fmod(0, 0));
  ck_assert_double_nan(fmod(0, 0));
}
END_TEST

Suite *fmod_suite(void) {
  Suite *s;  // объявление указателей на переменные набора и примера
  TCase *tc_core;
  s = suite_create("fmod(x)");  // создание нового набора abs(x)
  tc_core = tcase_create("core");  // создание нового тестового примера core
  tcase_add_test(tc_core,
                 s21_fmod_test1);  // добавление теста в тестовый пример
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
  tcase_add_test(tc_core, s21_fmod_test21);
  tcase_add_test(tc_core, s21_fmod_test22);
  tcase_add_test(tc_core, s21_fmod_test23);
  tcase_add_test(tc_core, s21_fmod_test24);
  tcase_add_test(tc_core, s21_fmod_test25);
  tcase_add_test(tc_core, s21_fmod_test26);
  tcase_add_test(tc_core, s21_fmod_test27);
  tcase_add_test(tc_core, s21_fmod_test28);
  suite_add_tcase(s, tc_core);  // добавление тестового примера в набор
  return s;
}

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

Suite *pow_suite(void) {
  Suite *s;  // объявление указателей на переменные набора и примера
  TCase *tc_core;
  s = suite_create("pow(x)");  // создание нового набора abs(x)
  tc_core = tcase_create("core");  // создание нового тестового примера core
  tcase_add_test(tc_core, s21_pow_test1);  // добавление теста в тестовый пример
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
  suite_add_tcase(s, tc_core);  // добавление тестового примера в набор
  return s;
}

void case_test(Suite *s, int *fail) {
  SRunner *runner = srunner_create(s);
  srunner_run_all(runner, CK_NORMAL);
  *fail = srunner_ntests_failed(runner);
  srunner_free(runner);
}

int main() {
  int no_failed = 0;
  case_test(abs_suite(), &no_failed);
  case_test(ceil_suite(), &no_failed);
  case_test(floor_suite(), &no_failed);
  case_test(fabs_suite(), &no_failed);
  case_test(sqrt_suite(), &no_failed);
  //   case_test(atan_suite(), &no_failed);
  //   case_test(asin_suite(), &no_failed);
  //   case_test(acos_suite(), &no_failed);
  //   case_test(sin_suite(), &no_failed);
  //   case_test(cos_suite(), &no_failed);
  //   case_test(tan_suite(), &no_failed);
  case_test(exp_suite(), &no_failed);
  case_test(log_suite(), &no_failed);
  case_test(fmod_suite(), &no_failed);
  case_test(pow_suite(), &no_failed);
  return (no_failed == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
