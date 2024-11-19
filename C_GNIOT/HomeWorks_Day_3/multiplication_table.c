#include <stdio.h>

int main()
{
    int number;

    // Ask the user for a number
    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &number);

    // Loop through the multiplication table
    for (int i = 1; i <= 10; i++)
    {
        int result = number * i;

        // Check if the result is even
        if (result % 2 != 0)
        {
            continue; // Skip odd results
        }

        // Print even results
        printf("%d x %d = %d\n", number, i, result);
    }

    return 0;
}
