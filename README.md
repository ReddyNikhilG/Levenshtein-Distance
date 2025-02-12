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
