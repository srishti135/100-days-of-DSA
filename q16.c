#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100], visited[100];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        visited[i] = 0;
    }

    int first = 1;
    for (int i = 0; i < n; i++) {
        if (visited[i] == 0) {
            int count = 1;
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    visited[j] = 1;
                }
            }
            visited[i] = 1;

            if (!first) printf(" ");
            printf("%d:%d", arr[i], count);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}