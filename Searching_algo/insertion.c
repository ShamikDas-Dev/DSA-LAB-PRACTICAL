// insert an element into an array

#include <stdio.h>
void insert(int arr[], int size, int pos, int key);
void insert(int arr[], int size, int pos, int key)
{
    for (int i = size; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos] = key;
    size++;
}

int main()
{
    int arr[] = {7, 14, 25, 34, 21, 41};
    int size = sizeof(arr) / sizeof(int);
    int key = 92;
    int pos = 3;
    insert(arr, size, pos, key);

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
