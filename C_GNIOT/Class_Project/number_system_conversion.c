#include <stdio.h>
#include <regex.h>
#include <stdlib.h>
void menuOptions()
{
    printf("Please Select any of the below for Input type.......\n");
    printf("PRESS....\n");
    printf("1 for Binary.\n");
    printf("2 for Octal.\n");
    printf("3 for Decimal.\n");
    printf("4 for Hexadecimal.\n\n\n");
}

// Function to check  that the number is binary or not
int isBinaryNumber(int num)
{
    char str[50]; // Buffer to hold the string representation of the number
    regex_t regex;
    int result;

    // Convert the integer to a string
    sprintf(str, "%d", abs(num)); // Use abs() to ignore the negative sign

    // Define the regular expression pattern
    const char *pattern = "^[01]+$";

    // Compile the regex
    if (regcomp(&regex, pattern, REG_EXTENDED))
    {
        fprintf(stderr, "Could not compile regex\n");
        return -1; // Return -1 in case of error
    }

    // Execute the regex
    result = regexec(&regex, str, 0, NULL, 0);

    // Free the compiled regex
    regfree(&regex);

    // Return 1 if match found, 0 otherwise
    return (result == 0) ? 1 : 0;
}

void binaryInput()
{
    int binaryNum;
    printf("Enter Your Binary Number : ");
    scanf("%d", &binaryNum);
}
int main()
{
    printf("\n\nHello User....!\nI'm here to assist you in converting various types of numbers into any specific format of your choice.\n");
    printf("\n********************************************************************************\n\n");
    menuOptions();
    return 0;
}