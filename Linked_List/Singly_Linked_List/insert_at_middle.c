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
    int pos, i;

    head = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    printf("Enter 3 values: ");
    scanf("%d %d %d", &head->data, &second->data, &third->data);

    head->next = second;
    second->next = third;
    third->next = NULL;

    printf("Enter position: ");
    scanf("%d", &pos);

    temp = head;

    for (i = 1; i < pos - 1 && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (temp == NULL || pos < 2)
    {
        printf("Invalid position");
        return 0;
    }

    newnode = malloc(sizeof(struct node));

    printf("Enter new value: ");
    scanf("%d", &newnode->data);

    newnode->next = temp->next;
    temp->next = newnode;

    temp = head;

    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}