// search an element in an array using itterative way of binary search

#include <stdio.h>

int binarySearch(int arr[], int key, int low, int high);
int binarySearch(int arr[], int key, int low, int high)
{

    while (low <= high)
    {

        int mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
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
