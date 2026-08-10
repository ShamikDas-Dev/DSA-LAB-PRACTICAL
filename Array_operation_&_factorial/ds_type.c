// Enter data structure name to know its type

#include<stdio.h>
#include<string.h>
int main(){

    printf("*Enter a data structure to know its types*\n");
    printf("1. array\n2. linked list\n3. tree\n4. graph\n");

    char str1[20];
    scanf("%s", &str1);
    if (strcmp(str1, "array")== 0)
    {
        printf("Non Primitive, Linear, Static");
    }
    else if (strcmp(str1, "linked list")== 0)
    {
        printf("Non Primitive, Linear, Dyanamic");
    }
    else if (strcmp(str1, "tree")== 0)
    {
        printf("Non Primitive,Non Linear");
    }
    else if (strcmp(str1, "graph")== 0)
    {
        printf("Non Primitive, Non Linear");
    }

    return 0;
}