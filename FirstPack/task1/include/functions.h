#pragma once 
#include <stddef.h>
#include <stdint.h>
#include <limits.h>
#include "string.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
typedef enum {
    BAD_INPUT = 0,
    OVERFLOW,
    NEGATIVE_NUMBER,
    INCORRECT_START,
    BIG_FLAG,
    INCORRECT_FLAG
} BadType;

void Multiples( int x);
void IsPrime(int x);
void Dec_toHex(int n, int l);
void Tabl(int x);
uint64_t SumN(int x);
uint64_t Factorial(int x);