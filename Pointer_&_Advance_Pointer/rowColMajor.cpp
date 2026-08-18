// rowmajor and columnmajor

#include <stdio.h>
void rowMajor(int arr[3][4], int rows, int column)
{

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("Address of arr[%d][%d] = %p \n", i, j, (void *)&arr[i][j]);
		}
	}
}
void colMajor(int arr[3][4], int rows, int column)
{

	for (int j = 0; j < column; j++)
	{
		for (int i = 0; i < rows; i++)
		{
			printf("Address of arr[%d][%d] = %p \n", i, j, (void *)&arr[i][j]);
		}
	}
}

int main()
{

	int arr[3][4] = {{5, 25, 47, 36},
					 {14, 36, 54, 74},
					 {54, 36, 49, 66}

	};
	int choice = 0;
	printf("Enter 1 for row major and 2 for column major\n");
	scanf("%d", &choice);
	switch (choice)
	{
	case 1:
		rowMajor(arr, 3, 4);
		break;
	case 2:
		colMajor(arr, 3, 4);
		break;
	default:
		printf("Invalid Choice");
		break;
	}

	return 0;
}