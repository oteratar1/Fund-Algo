
#include "include/functions.h"


int main(){
    int32_t  t = 0;
    printf("введите кол во запросов \n");
      char* endptr; 
     char buffer[100];
     char buffer2[100];
    
    if (scanf("%99s", buffer) != 1) {
        printf("Ошибка: введите корректное число\n");
        return INPUT_ERROR;
    }
    
     long result = strtol(buffer, &endptr, 10);
     
     if(*endptr != 0){
        printf("Bad input\n");
        return INPUT_ERROR;
    }
     if(result > INT_MAX || result  < INT_MIN){
        printf("An overflow has occurred! The value is too high\n");
        return OVERFLOW;
    }
    t = (int32_t)result;
    if (t <=0){
        printf("Число не может быть <= 0\n");
        return BAD_NUMBER;
    }

    int32_t* n =(int32_t*) malloc(t *sizeof(int32_t));
    if(n == NULL){
        printf("Не удалось выделить память для запросов");
        return ALLOCATE_ERROR;

    }
    int32_t m = 0;

    for (int32_t i = 0; i<t; ++i){
        printf("введите номер ");
        
        if (scanf("%99s", buffer2) != 1) {
            printf("Ошибка: введите корректное число\n");
            free(n);
            return INPUT_ERROR;
        }
        result = strtol(buffer2, &endptr, 10);
        if(*endptr != 0){
            printf("Bad input\n");
            return INPUT_ERROR;
        }
        if(result > MAX_PRIME_INDEX || result  <= 0){
            printf("An overflow has occurred! The value is too high\n");
            return OVERFLOW;
        }

        n[i] = (int32_t)result;
        if (n[i]> m){
            m = n[i];
        }
    }
    
    int32_t  c = 0;
    bool* pr = find_pr(&m);
    if(pr == NULL){
        printf("Не удалось выделить память для чисел\n");
        free(n);
        return ALLOCATE_ERROR;
    }
    for(int32_t i = 0, j = 2;i < t;){
        if(pr[j] == true){
            ++c;
            if(n[i] == c){
                printf("число найденное %d\n", j);
                j = 0;
                c = 0;
                ++i;
            }
            else{
                ++j;
            }
        }
        else{
            ++j;
        }
    }
    free(n);
    free(pr);
    return 0;
} 