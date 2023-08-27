#include <stdio.h>

int countWaysToJump(int n) {
    if (n <= 1) {
        return 1;
    }
    int dp[n + 1];
    dp[0] = dp[1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main() {
    int n;
    scanf("%d", &n);
    printf("method = %d", countWaysToJump(n));
    return 0;
}