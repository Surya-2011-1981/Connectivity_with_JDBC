// #include <stdio.h>
// #include <regex.h>

// int main()
// {
//     regex_t regex;
//     int reti;
//     char msgbuf[100];

//     // Compile regular expression
//     reti = regcomp(&regex, "^[0-9]+$", 0);
//     if (reti)
//     {
//         fprintf(stderr, "Could not compile regex\n");
//         return 1;
//     }

//     // Execute regular expression
//     reti = regexec(&regex, "12345", 0, NULL, 0);
//     if (!reti)
//     {
//         printf("Match\n");
//     }
//     else if (reti == REG_NOMATCH)
//     {
//         printf("No match\n");
//     }
//     else
//     {
//         regerror(reti, &regex, msgbuf, sizeof(msgbuf));
//         fprintf(stderr, "Regex match failed: %s\n", msgbuf);
//         return 1;
//     }

//     // Free compiled regular expression if you want to use it again
//     regfree(&regex);

//     return 0;
// }
