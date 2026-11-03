#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head, *second, *third, *newnode, *temp;

    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    printf("Enter 3 values: ");
    scanf("%d %d %d", &head->data, &second->data, &third->data);

    head->next = second;
    second->next = third;
    third->next = head;

    newnode = malloc(sizeof(struct node));

    printf("Enter new value: ");
    scanf("%d", &newnode->data);

    temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    newnode->next = head;
    temp->next = newnode;
    head = newnode;

    temp = head;

    do
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    while (temp != head);

    printf("(Back to Head)");

    return 0;
}