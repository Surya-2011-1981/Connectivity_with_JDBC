#include <stdio.h>
#include <stdbool.h>
void isGoldbach(int num);
int isPrime(int num);
int main()
{
    int num;
    printf("Enter any number to check the formation of the numbers as sum of two prime numbers :  ");
    scanf("%d", &num);

    if (num <= 2)
    {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
    }
    else
    {
        isGoldbach(num);
    }

    return 0;
}

// Function to check if a number is prime
int isPrime(int num)
{
    if (num <= 1)
        return 0; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i <= num / 2; i++)
    {
        // Check all numbers from 2 to n/2
        if (num % i == 0)
            return 0; // If n is divisible by i, it is not prime
    }
    return 1; // n is prime if no divisors were found
}

// Function to check if a number can be expressed as the sum of two prime numbers
void isGoldbach(int num)
{
    int flag = 0; // Initially set that, the number can't be formed

    for (int i = 2; i <= num / 2; i++)
    {
        if (isPrime(i) && isPrime(num - i))
        {
            printf("%d can be expressed as the sum of %d and %d.\n", num, i, num - i);
            flag = 1;
            break;
        }
    }

    if (!flag)
    {
        printf("%d cannot be expressed as the sum of two prime numbers.\n", num);
    }
}
