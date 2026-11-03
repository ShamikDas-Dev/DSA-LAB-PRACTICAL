#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *second, *third;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    printf("Enter 3 values: ");
    scanf("%d %d %d", &head->data, &second->data, &third->data);

    head->next = second;
    second->next = third;
    third->next = NULL;

    printf("3 nodes created");

    return 0;
}