#include <stdio.h>

int main()
{
    int count = 0; // To count the number of prime numbers found
    int num = 2;   // Starting number to check for primality

    printf("The first 100 prime numbers are:\n");

    while (count < 100)
    {
        int isPrime = 1; // Flag to check if num is prime

        // Check if num is prime using n/2 condition
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0; // num is not prime
                break;
            }
        }

        // If num is prime, print it and increment count
        if (isPrime)
        {
            printf("%d ", num);
            count++;
        }

        num++; // Move to the next number
    }

    printf("\n");
    return 0;
}
