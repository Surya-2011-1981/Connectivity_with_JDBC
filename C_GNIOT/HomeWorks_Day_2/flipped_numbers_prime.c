#include <stdio.h>

// Function to flip the digits of a number
int flipDigits(int inputNum)
{
    int flipped = 0;
    while (inputNum != 0)
    {
        int digit = inputNum % 10;
        flipped = flipped * 10 + digit;
        inputNum /= 10;
    }
    return flipped;
}

// Function to determine if a number is a prime number
int isPrimeNumber(int num)
{
    if (num <= 1)
        return 0; // Numbers less than or equal to 1 are not prime
    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
            return 0; // Not a prime number
    }
    return 1; // It is a prime number
}

int main()
{
    int userInput;

    // Prompt user for an integer
    printf("Enter an integer: ");
    scanf("%d", &userInput);

    // Flip the digits of the input number
    int flippedNumber = flipDigits(userInput);
    printf("Flipped Number: %d\n", flippedNumber);

    // Check if the flipped number is a prime number
    if (isPrimeNumber(flippedNumber))
    {
        printf("%d is a prime number.\n", flippedNumber);
    }
    else
    {
        printf("%d is not a prime number.\n", flippedNumber);
    }

    return 0;
}
