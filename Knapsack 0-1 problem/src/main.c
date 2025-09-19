#include "../headers/main.h"

/*
    Author: Sebastiano D'Angelo
*/

int main(){
    unsigned int W = 4;
    int val[] = {1, 2, 3};
    unsigned int wt[] = {4, 5, 1};

    printf("%d\n", knapsack(W, val, wt, sizeof(wt)/sizeof(wt[0])));
    
    return 0;
}

int knapsack(unsigned int W, int val[], unsigned int wt[], size_t wtlength){ 
    int dp[W + 1];
    for(size_t i = 0; i < W + 1; i++) dp[i] = 0;

    for(size_t i = 1; i <= wtlength; i++) {
        for(size_t j = W; j >= wt[i - 1]; j--){
            dp[j] = max(dp[j], dp[j - wt[i - 1]] + val[i - 1]);
        }
    }
    return dp[W];
}

int max(int a, int b) {
    if(a > b) return a;
    else return b;
}