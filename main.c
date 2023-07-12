#include <stdio.h>
#include <stdlib.h>

int main() {
    /* Declare variables */
    char color[45];
    char pluralNoun[45];
    char celebrityFirstName[45];
    char celebrityLastName[45];
    /* Get variable inputs */
    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityFirstName, celebrityLastName);
    /* Show statements */
    printf("Roses are %s.\n", color);
    printf("%s are blue.\n", pluralNoun);
    printf("I love %s %s.\n", celebrityFirstName, celebrityLastName);
    return 0;
}
