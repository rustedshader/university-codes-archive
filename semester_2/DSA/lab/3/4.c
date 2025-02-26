// Write a recursive function to print all combinations of balanced parentheses for n pairs.
// Not Done by Me Done By Claude LLM
// Understand the Logic

#include <stdio.h>
#include <string.h>
void rec_function(int n, int open, int close, char *s, int s_index, char ans[][100], int *count)
{
    if (open == n && close == n)
    {
        s[s_index] = '\0'; // Null-terminate the string
        strcpy(ans[*count], s);
        (*count)++;
        return;
    }

    if (open < n)
    {
        s[s_index] = '{';
        rec_function(n, open + 1, close, s, s_index + 1, ans, count);
    }

    if (close < open) // Ensure balanced parentheses
    {
        s[s_index] = '}';
        rec_function(n, open, close + 1, s, s_index + 1, ans, count);
    }
}
int main()
{
    int n = 3;
    int count = 0;
    char ans[1000][100]; // 2D array to store combinations
    char s[100];         // Buffer for building combinations

    rec_function(n, 0, 0, s, 0, ans, &count);

    printf("Total combinations: %d\n", count);
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", ans[i]); // Print as strings
    }

    return 0;
}