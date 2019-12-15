#include "lib.h"

int main(){

    int n, result;
    printf("Podaj liczbę naturalną:\n");
    scanf("%d", &n);

    result = collatz_steps(n);

    printf("Wynik to %d\n", result);
    return 0;
}
