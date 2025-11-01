
#include "include/functions.h"
int main(){
    int count = 2;
    int result[2];
    if(f(3, result, 2, 0.333333333333333, 0.123456789012) == INVALID_ARG){
        printf("Функция содержит неверный аргумент\n");
        return INVALID_ARG;
    }
    for(int i = 0; i<count;++i){
        if(result[i] == CONVERTED){
            printf("Число номер %d - CONVERTED\n",i+1);
        }
        else{
            printf("Число номер %d - NOT_CONVERTED\n",i+1);
        }
    }
    return 0;
}