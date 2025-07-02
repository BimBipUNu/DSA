#include <stdio.h>
#include <stdlib.h>

int findMaxNumber(int **a, int rows, int cols) {
    int max = a[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }
    return max;
}
int findMinNumber(int **a, int rows, int cols) {
    int min = a[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] < min) {
                min = a[i][j];
            }
        }
    }
    return min;
}
int main(void) {
    int rows;
    int cols;
    printf("Enter number of rows: ");scanf("%d",&rows);
    if (rows < 0) {
        printf("So hang khong hop le");
        return 0;
    }
    printf("Enter number of columns: ");scanf("%d",&cols);
    if (cols < 0) {
        printf("So cot khong hop le");
        return 0;
    }
    if (rows <=0 && cols<=0) {
        printf("Số hàng và số cột không hợp le ");
        return 0;
    }

    int **arr = (int **)malloc(rows * sizeof(int *));
    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
    }

    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            printf("Nhap phan tu vi tri {%d;%d}",i,j);scanf("%d",&arr[i][j]);
        }
    }
    int max = findMaxNumber(arr, rows, cols);
    int min = findMinNumber(arr, rows, cols);
    printf("max = %d\n",max);
    printf("min = %d\n",min);

    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    return 0;
}