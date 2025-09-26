#include <stdio.h>
#include <stdlib.h>
#include "include/functions.h"
#include "string.h"
#include <limits.h>



int main(const int argc, char* argv[]) {
    if (argc != 3){
        printf("Bad input\n");
        return BAD_INPUT;
    }

    char* endptr; 
    long result;
    
    result = strtol(argv[1], &endptr, 10);
    
    if(*endptr != 0){
        printf("Bad input\n");
        return BAD_INPUT;
    };
    
        

    if(result > INT_MAX || result  < INT_MIN){
        printf("An overflow has occurred! The value is too high\n");
        return OVERFLOW;
    }
    
    int  l = strlen(argv[1]);
    int x = atoi(argv[1]);
    char* flag = argv[2];
    
    if(x < 0){
        printf("A negative number has been entered:(\n");
        return NEGATIVE_NUMBER;
    }

    if (flag[0] != '-' && flag[0] != '/'){
        printf("Incorrect start of the FLAG has been entered\n");
        return INCORRECT_START;
    }
    if(strlen(flag) > 2){
        printf("Flag is too big\n");
        return BIG_FLAG;
    }
    switch (flag[1]) {
        case 'h':
            {
                printf("Numbers:\n");
                Multiples(&x);
                break;
            }
        case 'p':
            {
                printf("Сhecking for the primality of a number:\n");
                IsPrime(&x);
                break;
            }
        case 's':
            {
                Dec_toHex(x, l);
                break;
            }
        case 'e':
            {   
                if(x == 0 || x > 10){
                    printf("Bad input\n");
                    return BAD_INPUT;
                }
                Tabl(&x);
                break;
            }
        case 'a':
        {
            printf("%lu\n",SumN(&x));
            break;
        }
        case 'f':
            {   
                if(x>20){
                    printf("Sorry bro, its too big\n");
                    return BAD_INPUT;
                }
                printf("%lu\n",Factorial(&x));
                break;
            }
        default:
            {
                printf("incorrected flag\n");
                return INCORRECT_FLAG;
            }
    }

return 0;

}