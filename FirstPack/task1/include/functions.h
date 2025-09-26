#pragma once 
#include <stddef.h>
#include <stdint.h>

typedef enum {
    BAD_INPUT = 0,
    OVERFLOW,
    NEGATIVE_NUMBER,
    INCORRECT_START,
    BIG_FLAG,
    INCORRECT_FLAG
} BadType;

void Multiples(int* x);
void IsPrime(const int* x);
void Dec_toHex(int n, int l);
void Tabl(int* x);
uint64_t SumN(int*x);
uint64_t Factorial(int* x);