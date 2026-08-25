
// Implement modified bubble sort (swap flag)


#include<stdio.h>

void bubbleSort(int arr[], int size);
void bubbleSort(int arr[], int size){
    for (int step = 0; step < size; step++)
    {
        int swapped = 0;
        for (int i = 0; i < size - step - 1; i++)
        {
            if (arr[i] > arr[i+1])
            {
                int temp = arr[i];
                arr[i]= arr[i+1];
                arr[i+1]= temp;

                int swapped = 1;
            }
            
        }   

            
     
            printf("Step %d :", step+1);

            for (int i = 0; i < size; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
            
        
            if (swapped = 1)
            {
                break;
            }
        
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
    int arr[]= {2,3,25,36,55,78,99};
    int size = sizeof(arr)/sizeof(int);
    bubbleSort(arr,size);

    printf("Sorted Array\n");
    display(arr,size);

    return 0;
}