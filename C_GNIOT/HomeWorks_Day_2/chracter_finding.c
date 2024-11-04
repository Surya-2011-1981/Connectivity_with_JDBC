#include <stdio.h>

int main()
{
    char ch;

    // Prompt the user to enter a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is a digit (ASCII 48-57)
    if (ch >= 48 && ch <= 57)
    {
        printf("'%c' is a digit.\n", ch);
    }
    // Check if the character is an uppercase or lowercase alphabetic letter
    else if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        // Check if it is a vowel
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
            ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        {
            printf("'%c' is a vowel.\n", ch);
        }
        else
        {
            printf("'%c' is a consonant.\n", ch);
        }
    }
    // If it's not a digit or letter, it's a special character
    else
    {
        printf("'%c' is a special character.\n", ch);
    }

    return 0;
}
