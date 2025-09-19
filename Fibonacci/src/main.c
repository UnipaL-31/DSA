#include "../headers/main.h"

int main(){
    printf("%ld\n", fibonacci(30));

    return 0;
}

// Bruteforce case
long unsigned int fibonacci(unsigned int n) {
    if(n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/* Memoization
int fibonacciRec(int n, int memo[]) {
    if(n <= 1) return n;
    if(memo[n] != -1) return memo[n];
    memo[n] = fibonacciRec(n - 1, memo) + fibonacciRec(n - 2, memo);
    return memo[n];
}

int fibonacci(int n) {
    int memo[n + 1];
    for(int i = 0; i <= n; i++){
        memo[i] = -1;
    }
    return fibonacciRec(n, memo);
}
*/

/* Tabulation
int fibonacci(int n) {
    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;

    for(size_t i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}
*/

/*Space optimization
long unsigned int fibonacci(unsigned int n) {
    int n2, n1, current;
    
    n2 = 0;
    n1 = 1;
    current = 1;

    for(size_t i = 2; i <= n; i++){
        current = n1 + n2;
        n2 = n1;
        n1 = current;
    }
    return current;
}
*/