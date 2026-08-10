// Traversing 1D and 2D arrays in C

#include <stdio.h>

int main() {
    int arr1[5] = {2, 5, 7, 9, 4};

    int arr2[3][4] = {
        {12, 45, 8, 77},
        {34, 45, 76, 2},
        {56, 43, 23, 14}
    };

    int len = sizeof(arr1) / sizeof(arr1[0]);
    for (int i = 0; i < len; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}