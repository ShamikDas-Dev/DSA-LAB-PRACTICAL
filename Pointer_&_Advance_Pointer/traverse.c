// WAP to traverse an array using pointers in C
#include<stdio.h>
void traverse(int *arr, int size);
void traverse(int *arr, int size){
	
	for(int i = 0; i < size; i++){
		printf("%d ", *(arr+i));
	}
}

int main(){
	int arr[]= {14,25,34,55,78,99};
	int size = sizeof(arr)/ sizeof(int);
	traverse(arr,size);
	return 0;
}