
#include "../include/functions.h"
bool* find_pr(const int32_t* t){
    int32_t limit = *t * 20;
    bool* isPrimes = malloc((limit+1) * sizeof(bool));
    if(isPrimes == NULL){
        return NULL;
    }
    for(int32_t i = 0; i< limit; ++i){
        isPrimes[i]=false;
    }
    int32_t sqr = (int32_t)sqrt(limit);
    
        for (int32_t x = 1; x <= sqr; x++){
          for (int32_t y = 1; y <= sqr; y++)
          {
            int32_t x2 = x * x;
            int32_t y2 = y * y;

            int32_t n = 4 * x2 + y2;
            if(n <= limit && (n%12 == 1 || n%12 ==5)){
                isPrimes[n] = !isPrimes[n];
            }

            n = 3*x2 + y2;
            if(n <= limit && (n%12 == 7)){
                isPrimes[n] = !isPrimes[n];
            }

            n = 3*x2 - y2;
            if(x > y && n <= limit && (n%12 == 11)){
                isPrimes[n] = !isPrimes[n];
            }
        }
    }
    for (int32_t n = 5; n <= sqr; n += 2){
          if (isPrimes[n])
          {
            int32_t s = n * n;
            for (int32_t k = s; k <= limit; k += s){
              isPrimes[k] = false;
            }

          }
        }

      
      isPrimes[2] = true;
      isPrimes[3] = true;
    return isPrimes;
}
