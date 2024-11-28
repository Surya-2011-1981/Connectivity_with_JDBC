#include <stdio.h>

// Function declarations
void add(int *a, int *b, int *result);
void subtract(int *a, int *b, int *result);
void multiply(int *a, int *b, int *result);
void divide(int *a, int *b, float *result);

int main()
{
    int num1, num2;
    int sum, difference, product;
    float quotient;

    // Input two numbers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform operations
    add(&num1, &num2, &sum);
    subtract(&num1, &num2, &difference);
    multiply(&num1, &num2, &product);
    divide(&num1, &num2, &quotient);

    // Print results
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %.2f\n", quotient);

    return 0;
}

// Function to add two numbers
void add(int *a, int *b, int *result)
{
    *result = *a + *b;
}

// Function to subtract two numbers
void subtract(int *a, int *b, int *result)
{
    *result = *a - *b;
}

// Function to multiply two numbers
void multiply(int *a, int *b, int *result)
{
    *result = *a * *b;
}

// Function to divide two numbers
void divide(int *a, int *b, float *result)
{
    if (*b != 0)
    {
        *result = (float)(*a) / *b;
    }
    else
    {
        printf("Error: Division by zero!\n");
        *result = 0;
    }
}
