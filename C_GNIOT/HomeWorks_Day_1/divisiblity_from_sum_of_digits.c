#include <stdio.h>

int sum_of_digits(int num);         // Function to calculate the sum of digits
int is_divisible(int num, int sum); // Function to check divisibility without using modulus

int main()
{
    int number;
    printf("Enter a number to check if it is divisible by the sum of its digits: ");
    scanf("%d", &number);

    int sum = sum_of_digits(number); // Calculate the sum of digits

    // Check if the number is divisible by the sum of its digits
    if (is_divisible(number, sum))
    {
        printf("%d is Harshad i.e divisible by the sum of its digits (%d)\n", number, sum);
    }
    else
    {
        printf("%d is Nivien i.e not divisible by the sum of its digits (%d)\n", number, sum);
    }

    return 0;
}

// Function to calculate the sum of digits without using modulus
int sum_of_digits(int num)
{
    int sum = 0;

    while (num > 0)
    {
        int digit = num - (num / 10) * 10; // Extract the last digit
        sum += digit;                      // Add the digit to the sum
        num /= 10;                         // Remove the last digit
    }

    return sum; // Return the calculated sum
}

// Function to check if 'num' is divisible by 'sum' without using modulus
int is_divisible(int num, int sum)
{
    // If the sum is zero, we cannot divide by zero
    if (sum == 0)
    {
        return 0; // Not divisible
    }

    int flag = 0; // Flag variable to track divisibility

    // Repeat subtraction to check for divisibility
    while (num >= sum)
    {
        num -= sum; // Subtract sum from num
    }

    // Set the flag based on whether num is zero or not
    if (num == 0)
    {
        flag = 1; // Indicate that it is divisible
    }
    else
    {
        flag = 0; // Indicate that it is not divisible
    }

    return flag; // Return the flag variable
}
