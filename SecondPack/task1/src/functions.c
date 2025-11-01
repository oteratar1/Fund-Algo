
#include "../include/functions.h"

long long Nod(long long a, long long b)
{
    return (b == 0) ? a : Nod(b, a%b);
}

void double_to_rational_approx(double x, long long* num, long long* den){
    int status = 0;
    for( long long d = 1; d < MAX_DEN;++d){
        long long n = llround(x * d);
        if(fabs((double)n/d - x)< 1e-6){
            *num = n;
            *den = d;
            long long nod = Nod(*num, *den);
            *den = *den/nod;
            *num = *num/nod;
            status = 1;
        }
    }
    if (status == 0){
        //делаем приближенное
            *num = llround(x * MAX_DEN);
            *den = MAX_DEN;
            long long nod = Nod(*num, *den);
            *den = *den/nod;
            *num = *num/nod;
    }
    
}

RationalStatus factorization(long long* den, int base){
    for( long long i = 2; i*i<=(*den);++i){
        if((*den)%i == 0){
            if(base%i != 0){
                return NOT_FACTORIZE;
            }
            while(*den % i == 0){
                *den /=i;
            }
        }
    }
    if(*den > 1 && base % *den != 0){
        return NOT_FACTORIZE;
    }
    return FACTORIZE;

}

RationalStatus f(int base, int result[], int count, ...){
    if (!result || count<=0 || base<=1) {
        return INVALID_ARG;
        }
    long long num1, den1;
    double tmp;
    va_list arg;
    va_start(arg, count);
    for(int i = 0; i<count;++i){
        tmp = va_arg(arg, double);
        
        if(tmp <= 0 || tmp >=1){
            va_end(arg);
            return INVALID_ARG;
            
        }

        double_to_rational_approx(tmp, &num1, &den1);


        if(factorization(&den1, base) == NOT_FACTORIZE){
            result[i] = NOT_CONVERTED;
            continue;
        }
        result[i] = CONVERTED;

    }
    va_end(arg);
    return SUCCESS;
}