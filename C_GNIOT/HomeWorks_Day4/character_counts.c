#include <stdio.h>
#include <ctype.h>

int main()
{
    char sentence[1000]; // Array to hold the input sentence
    int vowels = 0, consonants = 0;

    do
    {
        printf("Enter a sentence (or # to quit): ");
        fgets(sentence, sizeof(sentence), stdin); // Get user input

        // Process each character in the sentence
        for (int i = 0; sentence[i] != '\0'; i++)
        {
            char ch = tolower(sentence[i]); // Convert to lowercase for comparison

            if (ch == '#')
            {
                break; // Exit if '#' is encountered
            }

            // Check if the character is a vowel or consonant
            if (ch >= 'a' && ch <= 'z')
            { // Check if character is a letter
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                {
                    vowels++; // Count vowels
                }
                else
                {
                    consonants++; // Count consonants
                }
            }
        }

        // Print the counts if '#' was not entered
        if (sentence[0] != '#')
        {
            printf("Vowels: %d, Consonants: %d\n", vowels, consonants);
        }

    } while (sentence[0] != '#'); // Continue until '#' is entered

    printf("Exiting program.\n");
    return 0;
}
