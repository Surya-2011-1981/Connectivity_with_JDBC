#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s)
{
    int i = n - 2;
    
    // Step 1: Find the rightmost character which is smaller than the next character
    while (i >= 0 && strcmp(s[i], s[i + 1]) >= 0) {
        i--;
    }

    // If no such character is found, we are at the last permutation
    if (i < 0) {
        return 0;
    }

    // Step 2: Find the rightmost character larger than s[i]
    int j = n - 1;
    while (strcmp(s[i], s[j]) >= 0) {
        j--;
    }

    // Step 3: Swap characters at i and j
    char *temp = s[i];
    s[i] = s[j];
    s[j] = temp;

    // Step 4: Reverse the suffix starting from i+1
    int left = i + 1, right = n - 1;
    while (left < right) {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }

    return 1;
}

int main()
{
    char **s;
    int n;
    scanf("%d", &n);
    s = calloc(n, sizeof(char*));
    for (int i = 0; i < n; i++) {
        s[i] = calloc(11, sizeof(char));
        scanf("%s", s[i]);
    }

    // Print the first permutation (already in lexicographical order)
    do {
        for (int i = 0; i < n; i++)
            printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
    } while (next_permutation(n, s));


    // Free the memory
    for (int i = 0; i < n; i++)
        free(s[i]);
    free(s);

    return 0;
}
