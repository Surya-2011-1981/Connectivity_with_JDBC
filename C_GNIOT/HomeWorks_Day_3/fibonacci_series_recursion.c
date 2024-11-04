#include <stdio.h>

int fib(int n); // Function to calculate Fibonacci number recursively

int main()
{
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series using recursion: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", fib(i)); // Print each Fibonacci number
    }
    printf("\n");
    return 0;
}

// Recursive function to calculate Fibonacci number
int fib(int n)
{
    if (n <= 1)
    {
        return n; // Base case: return n if n is 0 or 1
    }
    return fib(n - 1) + fib(n - 2); // Recursive case
}
