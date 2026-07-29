// Write a program to display the following pattern-
// *
// **
// ***
// ****

#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}