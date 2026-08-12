// search an element in an array using recursive way of binary search

#include <stdio.h>

int binarySearch(int arr[], int key, int low, int high);
int binarySearch(int arr[], int key, int low, int high)
{
    if (low > high)
    {
        return -1;
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] < key)
    {
        return binarySearch(arr, key, mid + 1, high);
    }
    else
    {
        return binarySearch(arr, key, low, mid - 1);
    }
}

int main()
{
    int arr[] = {12, 34, 45, 49, 57, 99, 122, 156, 567};
    int size = sizeof(arr) / sizeof(int);
    int low = 0;
    int high = size - 1;
    int key = 99;
    int result = binarySearch(arr, key, low, high);
    if (result == -1)
    {
        printf("Not found");
    }
    else
    {
        printf("%d found in %d index", key, result);
    }

    return 0;
}
