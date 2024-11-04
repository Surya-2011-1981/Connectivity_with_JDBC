#include <stdio.h>
#include <math.h>

// Function to calculate the number of digits in a number
int numberOfDigits(int num);

// Function to calculate the power of a given base raised to a specific power
int calculatePower(int base, int power);

// Function to check if a given number is an Armstrong number
int isArmstrong(int num, int power);

int main()
{
    int number;

    // Prompt the user to enter a number
    printf("Enter any number to check if it is an Armstrong number: ");
    scanf("%d", &number);

    // Calculate the number of digits in the entered number
    int digits = numberOfDigits(number);

    // Check if the entered number is an Armstrong number by comparing it with
    // the result of the isArmstrong function
    if (number == isArmstrong(number, digits))
    {
        printf("%d is an Armstrong Number", number);
    }
    else
    {
        printf("%d is not an Armstrong Number", number);
    }

    return 0;
}

// Function to count the number of digits in the given number
int numberOfDigits(int num)
{
    int digits = 0;
    do
    {
        num /= 10; // Divide the number by 10 to reduce it by one digit
        digits++;  // Increment the digit count
    } while (num != 0);
    return digits;
}

// Function to calculate base raised to the power of power (base^power)
int calculatePower(int base, int power)
{
    int result = 1;
    for (int i = 0; i < power; i++)
    {
        result = result * base; // Multiply result by base in each iteration
    }
    return result;
}

// Function to determine if a number is an Armstrong number
// Takes a number and the number of digits as parameters
int isArmstrong(int num, int power)
{
    int unit_digit;
    int sum = 0;

    // Loop to extract each digit and calculate its power, then add to sum
    while (num != 0)
    {
        unit_digit = num % 10;                    // Get the last digit
        sum += calculatePower(unit_digit, power); // Add the digit raised to the power of total digits
        num /= 10;                                // Remove the last digit
    }

    return sum; // Return the sum of powered digits
}
