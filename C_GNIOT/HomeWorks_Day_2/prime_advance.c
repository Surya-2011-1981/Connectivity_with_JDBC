#include <stdio.h>
#include <math.h>

int main()
{
    int num, i;
    i = 2; // Initialize i to 2, the first divisor to check

    // Prompt user for input
    printf("Enter any Number: ");
    scanf("%d", &num);

    // Check if the number is divisible by any number from 2 to num/2
    while (i <= floor(num / 2))
    {
        // If num is divisible by i, it's a composite number
        if (num % i == 0)
        {
            printf("%d is a Composite Number\n", num);
            return 0; // Exit program if a divisor is found
        }
        i++; // Increment i to check the next divisor
    }

    // If no divisors were found, the number is prime
    printf("%d is a Prime Number\n", num);

    return 0; // End of program
}
