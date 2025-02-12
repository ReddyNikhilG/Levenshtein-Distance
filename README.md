# DSA-ASSESMENT
DSA

Levenshtein Distance

Course: - Data Structures

Student Name: - Reddy Nikhil Gali, M.S.Hrithik

Roll Number: - RA2311026010295, RA2311026010299

Problem Statement: -

Write a program to find Levenshtein Distance between string X and Y.

Note:

The Levenshtein distance is a string metric for measuring the difference between

Two sequences. Informally, the Levenshtein distance between two words is the

Minimum number of single-character edits (i.e. insertions, deletions, or

Substitutions) required to change one word into the other.

Input Format

Two space separated input strings.

Output Format

Displays the Levenshtein Distance.

Constraints

Strings only.

Aim: -

The aim of the code is to calculate the Levenshtein distance between two input strings. The Levenshtein distance is the minimum number of single-character edits (insertions, deletions, or substitutions) required to change one string into another.

Algorithm: -

Read the two input strings, X and Y.

Create a matrix, dp, of size (m+1)*(n+1), where m is the length of the string X and n is the length of string Y.

Initialize the first row of the matrix with values from 0 to n, representing the number of insertions required to transform an empty string to Y.

Initialize the first column of the matrix with values from 0 to m, representing the number of deletions required to transform X to an empty string.

Iterate through each cell of the matrix, starting from the second row and second column.

If the characters at the corresponding positions in X and Y are the same, set the current cell value to the diagonal cell value (dp[i-1] [j-1]).

If the characters are different, set the current cell value to the minimum of the left cell value (dp[i][j-1]), the upper cell value (dp[i-1][j]), and the diagonal cell value (dp[i-1][j-1]), plus 1.

After iterating through all cells, the bottom-right cell of the matrix will contain the Levenshtein Distance.

Return the value in the bottom-right cell as the Levenshtein Distance.

Code: -

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

printf(“Enter two space separated strings: ”); 

// Get the input strings 

scanf("%s %s", X, Y); 

 

// Calculate and display the Levenshtein Distance 

printf("Levenshtein Distance: %d\n", levenshtein_distance(X, Y)); 

 

return 0; 
}
Sample Input and Output: - INPUT: sitten,kitten OUTPUT: Lvenshtein Distance : 1 INPUT: Book,Back OUTPUT: Lavenshtein Distance : 2

Github Link : -

Result: -

The above code is executed successfully and the output verification is also verified successfully.

Conclusion: -

Overall, this code demonstrates how to implement the Levenshtein Distance algorithm using dynamic programming in C, showcasing string manipulation and the use of helper functions.
