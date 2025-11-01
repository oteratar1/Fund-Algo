#include <math.h>
#include <stdarg.h>
#include <stdio.h>

#define MAX_DEN  10000
typedef enum {
    NOT_CONVERTED = 0,
    CONVERTED,
    REPRESENTED,
    NOT_REPRESENTED,
    FACTORIZE,
    NOT_FACTORIZE,
    INVALID_ARG,
    SUCCESS
} RationalStatus;


long long Nod(long long a, long long b);
void double_to_rational_approx(double x, long long* num, long long* den);
RationalStatus factorization(long long* den, int base);
RationalStatus f(int base, int result[], int count, ...);