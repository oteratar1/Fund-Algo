#include <stdio.h>
#include "../include/functions.h"
#include <stdint.h>

void Multiples(int* const x){
    int c = 0;
    for(int i = *x;*x !=0 &&  i<101; i += *x ){
        printf("%d\t", i);
        ++c;
    }
    if(*x == 0){
        printf("Sorry bro, its zero\n");
        ++c;
    }
    if(c == 0){
        printf("Sorry bro, there are no numbers\n");
    }
}
void IsPrime(const int* x){
    int c = 0;
    if (*x != 1 && *x%2 != 0 && *x>0){
        for(int i = 3;i*i <= *x;i+=2){
            if(*x%i == 0){
                printf("Composite number\n");
                ++c;
                break;
            }
        }
        if(c == 0 ){
            printf("Prime number\n");
        }
    }
    else if(*x == 1){
            printf("Its 1!\n");
        }
    else if(*x == 2){
            printf("Prime number\n");
            }
    else if(*x != 1 && *x != 2){
            printf("Composite number\n");
            }
    }
void Dec_toHex(int x, size_t l)
    {
      char hexaDeciNum[l];

        if(x ==0){
            printf("0\t");
        }
    int i = 0;
    while (x != 0) {
        int temp = 0;
        temp = x % 16;
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        x = x / 16;
    }

    for (int j = i - 1; j >= 0; j--){
        printf("%c\t", hexaDeciNum[j]) ;
        
    }
     printf("\n") ;
}





uint64_t SumN(int*x){
    uint64_t s = 0;
    s = (uint64_t)(*x) * (1 + *x) /2;
    return s;
}

uint64_t Factorial(int* x){
    uint64_t s = 1;
    for (int i = 2 ; i<=*x;++i){
        s*=i;
    }
    return s;
}
