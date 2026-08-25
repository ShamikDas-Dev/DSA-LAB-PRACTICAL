// Implement Bubble Sort


#include<stdio.h>
void bubbleSort(int arr[], int size);
void bubbleSort(int arr[], int size){
    for (int step = 0; step < size; step++)
    {
        for (int i = 0; i < size - step - 1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i]= arr[i+1];
                arr[i+1]= temp;
            }
            
        }
     
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
    bubbleSort(arr,size);
    printf("Sorted Array\n");
    display(arr,size);

    return 0;
}