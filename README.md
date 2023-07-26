# C Programming Mad Libs

## Description
My third C programming project, learning to create a Mad Libs game in C.

Link to the original C programming link:<a href="https://github.com/deanalex-buno95/cprogram"> https://github.com/deanalex-buno95/cprogram </a>

## Lessons Taken

### Lesson 10
In this lesson, I make a Mad Libs game by taking string inputs to fill in a paragraph of three sentences.

Input:
```
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
```

Output:
```
Enter a color: <insert 'color' here>
Enter a plural noun: <insert 'plural noun' here>
Enter a celebrity: <insert 'celebrityFirstName' and 'celebrityLastName' here>
Roses are 'color'.
'plural noun' are blue.
I love 'celebrityFirstName' 'celebrityLastName'.
```
