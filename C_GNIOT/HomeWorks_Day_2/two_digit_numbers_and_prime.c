#include <stdio.h>

int main()
{
    int min, max;
    int count = 0;

    // Request input for range
    printf("Enter the min of the range (should be less than or equal to 99): ");
    scanf("%d", &min);
    printf("Enter the max of the range (should be greater than or equal to 10): ");
    scanf("%d", &max);

    // Validate the range for two-digit numbers
    if (min < 10)
        min = 10; // Set min to the smallest two-digit number
    if (max > 99)
        max = 99; // Cap max at the largest two-digit number

    // Count two-digit numbers that are divisible by any prime between 2 and 10
    for (int i = min; i <= max; i++)
    {
        // Check for divisibility by each prime number
        if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || i % 7 == 0)
        {
            count++;
        }
    }

    // Display the result
    printf("Count of two-digit numbers divisible by any prime between 2 and 10 in the range [%d, %d]: %d\n", min, max, count);

    return 0;
}
