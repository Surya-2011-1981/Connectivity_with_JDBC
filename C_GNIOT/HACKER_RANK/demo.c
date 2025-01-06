#include <stdio.h>

void printMatrix(int n) {
    int size = 2 * n - 1; // Size of the matrix
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int minDistance = i; 
            if (j < minDistance) {
                minDistance = j;
            }
            if (size - i - 1 < minDistance) {
                minDistance = size - i - 1;
            }
            if (size - j - 1 < minDistance) {
                minDistance = size - j - 1;
            }
            printf("%d ", n - minDistance);
        }
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter a value for n: ");
    scanf("%d", &n);
    printMatrix(n);
    return 0;
}
