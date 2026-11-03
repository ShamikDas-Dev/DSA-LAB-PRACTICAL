#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

int main()
{
    struct node *head, *second, *third, *newnode;

    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    printf("Enter 3 values: ");
    scanf("%d %d %d", &head->data, &second->data, &third->data);

    head->prev = NULL;
    head->next = second;

    second->prev = head;
    second->next = third;

    third->prev = second;
    third->next = NULL;

    newnode = malloc(sizeof(struct node));

    printf("Enter new value: ");
    scanf("%d", &newnode->data);

    newnode->prev = NULL;
    newnode->next = head;

    head->prev = newnode;
    head = newnode;

    while (head != NULL)
    {
        printf("%d <-> ", head->data);
        head = head->next;
    }

    printf("NULL");

    return 0;
}