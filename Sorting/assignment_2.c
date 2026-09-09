//take an n number of element, split it into two arrays. first half is n1 second half is n2. perform selection sort in n1 and insertion sort in n2.then apply a fn which merge the two sorted arrays
#include <stdio.h>
void display(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for (int j = low; j < high; j++)
    {
        if (arr[j]<= pivot)
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
    return (i+1);
    
}
int main()
{
    int n = 0;
    printf("Enter how many elements you want to take: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    display(arr,n);
    partition(arr,0,n-1);
    
    return 0;
}