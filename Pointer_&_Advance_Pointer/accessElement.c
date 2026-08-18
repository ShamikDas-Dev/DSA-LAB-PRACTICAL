//  WAP to access element of an array using pointers in c
#include<stdio.h>

int main(){
	int size = 0;
	int arr[size];
	int *ptr;
	
	ptr = arr;
	printf("Enter how many elements you want to input: ");
	scanf("%d", &size);
	printf("Enter the elements of the array: ");
	for(int i = 0; i < size ; i++){
		scanf("%d", (ptr+i));
	}
	
	for(int i = 0; i < size; i++){
		printf("%d ", *(ptr+i));
	}
	return 0;
}