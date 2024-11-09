#include <stdio.h>
#include <string.h>

// Function to swap two characters
void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

// Recursive function to generate permutations
void permute(char *str, int l, int r) {
    if (l == r) {
        printf("%s\n", str);  // Base case: when left index equals right, print the string
    } else {
        for (int i = l; i <= r; i++) {
            swap(&str[l], &str[i]);  // Swap character at index l with index i
            permute(str, l + 1, r);  // Recur to permute the rest of the string
            swap(&str[l], &str[i]);  // Backtrack (swap back to restore the string)
        }
    }
}

int main() {
    char str[] = "abc";  // Input string
    int n = strlen(str);
    permute(str, 0, n - 1);  // Call permute with left index = 0 and right index = length - 1
    return 0;
}
