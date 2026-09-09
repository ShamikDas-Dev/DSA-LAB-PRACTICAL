// Take an arr of 10 elements randomly unsorted. Implement bubble sort and perform this for one external
// loop iteration. Then take that intermediate arr and pass it to quick sort.

#include <stdio.h>
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void bubbleSort(int arr[], int size)
{
    for (int step = 0; step < size-1; step++)
    {
        for (int i = 0; i < size - step - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        if (step == 1)
        {
            break;
        }
        
        printf("Step for BS %d :", step + 1);

        for (int i = 0; i < size; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");

        
        quickSort(arr, 0, size - 1);
    }
}
void display(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int main()
{
    int arr[] = {21, 36, 1, 8, 74, 29, 12, 3};
    int size = sizeof(arr) / sizeof(int);
    bubbleSort(arr, size);
    printf("Sorted Array\n");
    display(arr, size);

    return 0;
}