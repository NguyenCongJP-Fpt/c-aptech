#include<stdio.h>
#include <memory.h>

void main() { 

    int i, j, temp, arr[5] = {23, 90, 9, 25, 16};

    printf("Cac phan tu chưa sap xep: \n");
    for (int k = 0; k < 5; ++k) {
        printf("%d ", arr[k]);
    }
    printf("\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5 - i - 1; j++) {
            printf("Tai i = %i, j = %i\n", i, j);
            printf("So sanh arr[%i] (arr[j]) voi arr[%i] (arr[j+1]). \n", j, j+1);
            printf("arr[j] = %i, ", arr[j]);
            printf("arr[j+1] = %i", arr[j+1]);
            printf("\n");
            if (arr[j] > arr[j + 1]) {
                printf("arr[j] > arr[j+1]. Doi cho hai so. \n");
                printf("\n");
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            } else{
                printf("arr[j] < arr[j+1]. Khong doi cho hai so. \n");
            }
            printf("\nCac phan tu cua mang: \n");
            for (int k = 0; k < 5; ++k) {
                printf("%d ", arr[k]);
            }
            printf("\n----------------\n");
        }
    }
    printf("\n");
    printf("Cac phan tu sau khi sap xep: \n");
    for (int k = 0; k < 5; ++k) {
        printf("%d ", arr[k]);
    }
}
