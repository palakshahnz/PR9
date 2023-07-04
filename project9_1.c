#include <stdio.h>

float calculateAverage(int arr[][100], int rows, int columns) {
    int sum = 0;
    int count = 0;
    int i,j;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            sum += arr[i][j];
            count++;
        }
    }

    return (float)sum / count;
}

int main() {
    int rows, columns;
    int i,j;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &columns);

    int arr[100][100];

    printf("\nEnter array's elements:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    float average = calculateAverage(arr, rows, columns);
    printf("\nAverage of the Array: %.2f\n", average);

    return 0;
}

