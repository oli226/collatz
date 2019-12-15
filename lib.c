#include "lib.h"

 int collatz_steps(int n){

    int steps = 0;

    if (n<=0){
        return -1;
    }

    while (n!=1){

        if (n%2 == 0){
            n = n/2;
            ++steps;
        }
        else{
            n = 3*n +1;
            ++steps;
        }
    }
    return steps;
}