// WAP to perform linear search using pointers using function in c
#include<stdio.h>
int linearSearch(int *arr, int size, int key){
	for(int i = 0; i< size; i++){
		if(*(arr+i)==key){
			printf("Element found at %d index", i);
			return;
		}
	}
	
	printf("Element not found in array");
}
int main(){
	int arr[]= {54,65,12,87,66,89,25};
	int size = sizeof(arr)/ sizeof(int);
	int key = 0;
	printf("Enter the element to search in array: ");
	scanf("%d", &key);
	linearSearch(arr,size,key);
	return 0;
}