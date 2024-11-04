#include <stdio.h>

// Function to check if a number is divisible by a given divisor
int check_divisiblity(int number, int divisor);

// Function to calculate the remainder of a number when divided by a given divisor
int get_remainder(int number, int divisor);

int main()
{
    int year;

    // Prompt the user to enter a year
    printf("Enter any year to check whether it is leap or not: ");
    scanf("%d", &year); // Taking user input for the year

    // Check if the year is divisible by 4
    int is_year_divisible = check_divisiblity(year, 4);

    // Calculate the remainder when the year is divided by 100 (to find non-century years)
    int non_century_year = get_remainder(year, 100);

    // Calculate the century by removing the non-century remainder
    int century = year - non_century_year;

    // Check if the century is divisible by 400
    int is_century_divisible = check_divisiblity(century, 400);

    // Determine if the year is a leap year based on divisibility rules
    if (is_year_divisible == 1 && is_century_divisible == 1)
    {
        printf("%d is a Leap Year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    return 0;
}

// Function to check if 'number' is divisible by 'divisor' using iterative remainder calculation
int check_divisiblity(int number, int divisor)
{
    int i = 0;
    int remainder = 0;

    // Loop for remainder while i reaches to the number
    while (i < number)
    {
        if (remainder == divisor - 1)
        {
            remainder = 0; // Reset remainder if it matches divisor - 1
        }
        else
        {
            remainder++;
        }
        i++;
    }

    // Return 1 if number is divisible (remainder is 0), otherwise return 0
    if (remainder == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Function to calculate the remainder of 'number' when divided by 'divisor'
int get_remainder(int number, int divisor)
{
    int i = 0;
    int remainder = 0;

    // Loop to simulate division using repeated addition and subtraction
    while (i < number)
    {
        if (remainder == divisor - 1)
        {
            remainder = 0; // Reset remainder if it matches divisor - 1
        }
        else
        {
            remainder++;
        }
        i++;
    }

    return remainder; // Return the calculated remainder
}
