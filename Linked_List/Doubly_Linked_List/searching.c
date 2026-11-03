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
    int key, pos = 1, found = 0;

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

    printf("Enter value to search: ");
    scanf("%d", &key);

    temp = head;

    while (temp != NULL)
    {
        if (temp->data == key)
        {
            printf("Element found at position %d", pos);
            found = 1;
            break;
        }

        temp = temp->next;
        pos++;
    }

    if (found == 0)
    {
        printf("Element not found");
    }

    return 0;
}