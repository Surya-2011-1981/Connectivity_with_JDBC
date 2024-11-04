#include <stdio.h>
#include <math.h>

// Function to determine if a number is a perfect square
int is_perfect_square(int number)
{
    int square_root = (int)sqrt(number);
    return square_root * square_root == number;
}

// Function to calculate the sum of the digits of a number
int sum_of_digits(int number)
{
    int total = 0;
    while (number > 0)
    {
        total += number % 10; // Add last digit to total
        number /= 10;         // Remove last digit
    }
    return total;
}

// Function to generate the first n prime numbers
void generate_prime_numbers(int count)
{
    int found = 0;   // Counter for found primes
    int current = 2; // Start checking from the first prime number

    while (found < count)
    {
        int is_prime = 1; // Assume current number is prime

        // Check if current number is prime
        for (int i = 2; i <= sqrt(current); i++)
        {
            if (current % i == 0)
            {
                is_prime = 0; // Current number is not prime
                break;
            }
        }

        if (is_prime)
        {
            printf("Found prime: %d\n", current);
            found++;

            // Check if the sum of the digits is a perfect square
            if (is_perfect_square(sum_of_digits(current)))
            {
                printf("Terminated: The sum of the digits of %d is a perfect square.\n", current);
                break; // Exit if digit sum is a perfect square
            }
        }

        current++; // Move to the next candidate number
    }
}

int main()
{
    int num_primes;
    printf("Enter the number of primes to generate: ");
    scanf("%d", &num_primes);
    generate_prime_numbers(num_primes);
    return 0;
}
