#include <stdio.h>

void fibonacci_while(int n);

int main()
{
    int n;

    printf("Enter the number of Steps : ");
    scanf("%d", &n);

    fibonacci_while(n);
    return 0;
}

void fibonacci_while(int n)
{
    int first = 0, second = 1, next;
    int count = 0;

    if (n < 1)
    {
        printf("Please enter a positive integer.\n");
        return;
    }

    printf("Fibonacci series using while loop: ");
    while (count < n)
    {
        printf("%d ", first);
        next = first + second; // Calculate the next number
        first = second;        // Move to the next number
        second = next;         // Update second to next
        count++;
    }
    printf("\n");
}