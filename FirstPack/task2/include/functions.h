#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include <limits.h>
#include <stdbool.h>
#include <stdlib.h>//maloc
#define MAX_PRIME_INDEX  10000000
bool* find_pr(const int32_t* t);
typedef enum {
    ALLOCATE_ERROR = 0,
    OVERFLOW,
    INPUT_ERROR,
    BAD_NUMBER
  
} BadType;
