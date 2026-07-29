// Write a program to check the operations of for loop and playing with it.
// Run one case at a time by commenting out the other cases.

// Case 1(No Output)--
#include <stdio.h>
int main()
{
    int i;
    for (; i < 5; i++)
    {
        printf("DSA\n");
    }

    return 0;
}

// Case-2(Infinite Loop)

#include <stdio.h>
int main()
{
    int i;
    for (;; i++)
    {
        printf("DSA\n");
    }

    return 0;
}

// Case-3(Infinite Loop)--

#include <stdio.h>
int main()
{
    int i;
    for (;;)
    {
        printf("DSA\n");
    }

    return 0;
}