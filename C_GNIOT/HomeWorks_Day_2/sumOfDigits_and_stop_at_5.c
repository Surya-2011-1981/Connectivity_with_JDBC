#include <stdio.h>

int main()
{
    int num, sum = 0; // Declare variables: num to hold user input, sum to hold the sum of digits

    // Prompt the user to enter a number
    printf("Enter any Number : ");
    scanf("%d", &num);

    int remainder; // Variable to store the remainder (last digit of the number)

    // Loop to calculate the sum of digits of num
    while (num != 0)
    {
        remainder = num % 10; // Get the last digit of the number

        // Check if the remainder is 5
        if (remainder == 5)
        {
            printf(" (Incomplete Sum)  "); // Print message if the digit 5 is found
            break;                         // Exit the loop when the digit 5 is encountered
        }

        sum += remainder; // Add the remainder to the sum
        num /= 10;        // Remove the last digit from num
    }

    // Display the sum of digits (or incomplete sum if 5 was found)
    printf("The Sum is  : %d ", sum);

    return 0; // End the program
}
