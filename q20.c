#include <stdio.h>

int main() {
    int n, i, j, sum, count;

    printf("Enter n: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    count = 0;

    // Check every subarray a[i] to a[j]
    for (i = 0; i < n; i++) {
        sum = 0;
        for (j = i; j < n; j++) {
            sum = sum + a[j];
            if (sum == 0)
                count++;
        }
    }

    printf("%d\n", count);

    return 0;
}