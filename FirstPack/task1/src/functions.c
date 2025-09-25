#include <stdio.h>
#include "../include/functions.h"

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

