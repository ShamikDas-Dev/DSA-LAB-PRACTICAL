// search an element in an array by using linear search

#include <stdio.h>
int linearSearch(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {5, 67, 34, 23, 12, 64};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 64;
    int result = linearSearch(arr, size, key);
    if (result == -1)
    {
        printf("Not found");
    }

    else
    {
        printf("found at index %d", result);
    }

    return 0;
}
