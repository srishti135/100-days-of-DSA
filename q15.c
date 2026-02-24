#include <stdio.h>

int diagonalSum(int matrix[][10], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
    }
    return sum;
}

int main() {
    int n;
    printf("Enter matrix size: ");
    scanf("%d", &n);

    int matrix[10][10];
    printf("Enter matrix elements:\n");
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    printf("Primary diagonal sum: %d\n", diagonalSum(matrix, n));
    return 0;
}