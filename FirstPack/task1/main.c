#include <stdio.h>
#include <stdlib.h>
#include "include/functions.h"
int main(const int argc, char* argv[]) {
    if (argc != 3){
        printf("Bad input\n");
        return 0;
    }

    int x = atoi(argv[1]);
    char* flag = argv[2];

    if (flag[0] != '-' && flag[0] != '/'){
        return 0;
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
    }

return 0;
}