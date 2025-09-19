#include "../headers/headers.h"

int main(){
    int n = 10;
    printf("non-tail recursive factorial of %d: %d\n\n", n, factorial(n));
    printf("tail recursive factorial of %d: %d\n\n", n, factTail(n));

    return 0;
}

int factorial(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * factorial(n - 1);
    }
}

int factAux(int acc, int n){
    if(n == 0){
        return acc;
    }
    else{
        return factAux(acc * n, n - 1);
    }
}

int factTail(int n){
    return factAux(1, n);
}