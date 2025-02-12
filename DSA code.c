#include <stdio.h>
#include <string.h>

int min(int a, int b, int c) {
    if (a < b && a < c) {
        return a;
    } else if (b < a && b < c) {
        return b;
    } else {
        return c;
    }
}

int levenshtein_distance(char* X, char* Y) {
    int m = strlen(X);
    int n = strlen(Y);
    
    // Create a matrix to store the distances
    int dp[m + 1][n + 1];
    
    // Initialize the first row and column
    for (int i = 0; i <= m; i++) {
        dp[i][0] = i;
    }
    for (int j = 0; j <= n; j++) {
        dp[0][j] = j;
    }
    
    // Compute the distances
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]) + 1;
            }
        }
    }
    
    // Return the Levenshtein Distance
    return dp[m][n];
}

int main() {
    char X[100], Y[100];
    printf("Enter two strings:");
    // Get the input strings
    scanf("%s %s", X, Y);
    
    // Calculate and display the Levenshtein Distance
    printf("Levenshtein Distance: %d\n", levenshtein_distance(X, Y));
    
    return 0;
}
