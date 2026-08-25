// Implement Selection Sort

#include<stdio.h>
void selectionSort(int arr[], int size);
void selectionSort(int arr[], int size){
   for (int step = 0; step < size-1; step++)
   {
        int min_idx = step;
        for (int i = step+1; i < size; i++)
        {
            if (arr[i]< arr[min_idx])
            {
                min_idx = i;
            }
            
        }
                int temp = arr[min_idx];
                arr[min_idx]= arr[step];
                arr[step]= temp;


            printf("Step %d :", step+1);

            for (int i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            
   }
   
    

}

void display(int arr[], int size);
void display(int arr[], int size){

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    
}
int main(){
    int arr[]= {21,36,1,8,74,29,12,3};
    int size = sizeof(arr)/sizeof(int);
    selectionSort(arr,size);
    printf("Sorted Array\n");
    display(arr,size);

    return 0;
}