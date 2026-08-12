// delete an element from an array

#include <stdio.h>
int delete(int arr[], int size, int pos);
int delete(int arr[], int size, int pos)
{
    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    return size - 1;
}

int main()
{
    int arr[] = {7, 14, 25, 34, 21, 41};
    int size = sizeof(arr) / sizeof(int);
    int pos = 4;
    
    size = delete(arr, size, pos);
    
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}


