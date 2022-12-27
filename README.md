# s21_math  
Implementation of our own version of the math.h library.  

## Overview of "s21_math.h" functions

| No. | Function | Description |
| --- | -------- | ----------- |
| 1 | `int s21_abs(int x)` | Computes absolute value of an integer value |
| 2 | `long double s21_acos(double x)` | Computes arc cosine |
| 3 | `long double s21_asin(double x)` | Computes arc sine |
| 4 | `long double s21_atan(double x)` | Computes arc tangent |
| 5 | `long double s21_ceil(double x)` | Returns the nearest integer not less than the given value |
| 6 | `long double s21_cos(double x)` | Computes cosine |
| 7 | `long double s21_exp(double x)` | Returns e raised to the given power |
| 8 | `long double s21_fabs(double x)` | Computes absolute value of a floating-point value |
| 9 | `long double s21_floor(double x)` | Returns the nearest integer not greater than the given value |
| 10 | `long double s21_fmod(double x, double y)` | Remainder of the floating-point division operation |
| 11 | `long double s21_fuctorial(long long int x)` | Computes factorial of x. |
| 12 | `long double s21_log(double x)` | Computes natural logarithm |
| 13 | `long double s21_pow_int(double base, long long int exp)` | Raises a number to the given power. |
| 14 | `long double s21_pow(double base, double exp)` | Raises a number to the given power |
| 15 | `long double s21_sin(double x)` | Computes sine |
| 16 | `long double s21_sqrt(double x)` | Computes square root |
| 17 | `long double s21_tan(double x)` | Computes tangent |

## Overview of "s21_math.h" defines

| No. | Function | Description |
| --- | -------- | ----------- |
| 1 | `S21_PI` | PI number |
| 2 | `S21_NAN` | Implementation of nan |
| 3 | `S21_INF_POS` | Positive infinity |
| 4 | `S21_INF_NEG` | Negative infinity |
| 5 | `S21_LN2` | Value of natural logarithm of 2 |
| 6 | `S21_E` | Euler’s Number |
| 7 | `S21_IS_NAN(x)` | Expands to (x != x) |
| 8 | `S21_IS_INF(x)` | Expands to (x == S21_INF_NEG \|\| x == S21_INF_POS) |

## Build
### Preparation
   To start build you need to move to `./src` dir.
   ```Bash
   cd ./src
   ```
### Build
* Build static lib s21_math.a into `./build` dir

   ```
   make all
   ```
   or
   ```
   make s21_math.a
   ```
*  Build and run tests for lib
   ```
   make test
   ```
*  Generate lib code coverage by tests into `./src/report` dir
   ```
   make gcov_report
   ```
*  Clean project
   ```
   make clean
   ```
