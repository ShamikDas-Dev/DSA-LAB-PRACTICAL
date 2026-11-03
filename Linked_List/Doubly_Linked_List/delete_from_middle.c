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
    struct node *head, *second, *third, *temp;
    int pos, i;

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

    printf("Enter position to delete: ");
    scanf("%d", &pos);

    temp = head;

    for (i = 1; i < pos && temp != NULL; i++)
    {
        temp = temp->next;
    }

    if (pos < 2 || temp == NULL || temp->next == NULL)
    {
        printf("Invalid position");
        return 0;
    }

    temp->prev->next = temp->next;
    temp->next->prev = temp->prev;

    free(temp);

    temp = head;

    while (temp != NULL)
    {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    }

    printf("NULL");

    return 0;
}