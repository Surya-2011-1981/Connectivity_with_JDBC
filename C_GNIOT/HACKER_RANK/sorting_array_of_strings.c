#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int min(int a, int b) {
    return (a >= b) ? b : a;
}

int lexicographic_sort(const char* a, const char* b) {
    for (int i = 0; i < min(strlen(a), strlen(b)); i++) {
        if (a[i] < b[i])
            return -1;
        else if (a[i] > b[i])
            return 1;
    }
    return strlen(a) < strlen(b) ? -1 : (strlen(a) > strlen(b) ? 1 : 0);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    for (int i = 0; i < min(strlen(a), strlen(b)); i++) {
        if (a[i] < b[i])
            return 1;
        else if (a[i] > b[i])
            return -1;
    }
    return strlen(a) < strlen(b) ? 1 : (strlen(a) > strlen(b) ? -1 : 0);
}

int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int arr[26] = {0};  // To track the distinct characters
    int a_count = 0, b_count = 0;

    // Count distinct characters in string a
    for (int i = 0; i < strlen(a); i++) {
        arr[a[i] - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i] == 1) a_count++;
    }

    // Reset arr for string b
    memset(arr, 0, sizeof(arr));

    // Count distinct characters in string b
    for (int i = 0; i < strlen(b); i++) {
        arr[b[i] - 'a'] = 1;
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i] == 1) b_count++;
    }

    if (a_count != b_count)
        return a_count < b_count ? -1 : 1;
    else
        return strcmp(a, b);
}

int sort_by_length(const char* a, const char* b) {
    if (strlen(a) < strlen(b))
        return -1;
    else if (strlen(b) < strlen(a))
        return 1;
    else
        return strcmp(a, b);
}

void string_sort(char** arr, const int len, int (*cmp_func)(const char* a, const char* b)) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - 1 - i; j++) {
            if (cmp_func(arr[j], arr[j + 1]) > 0) {
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char** arr = (char**)malloc(n * sizeof(char*));
  
    for (int i = 0; i < n; i++) {
        arr[i] = malloc(1024 * sizeof(char));
        scanf("%s", arr[i]);
        arr[i] = realloc(arr[i], strlen(arr[i]) + 1);
    }

    string_sort(arr, n, lexicographic_sort);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    // Free allocated memory
    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }
    free(arr);
  
    return 0;
}
