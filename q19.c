#include <stdio.h>

int my_abs(int x) {
    if (x < 0)
        return -x;
    return x;
}
void selection_sort(int a[], int n) {
    int i, j, min_idx, temp;
    for (i = 0; i < n - 1; i++) {
        min_idx = i;
        for (j = i + 1; j < n; j++) {
            if (a[j] < a[min_idx])
                min_idx = j;
        }
        temp = a[i];
        a[i] = a[min_idx];
        a[min_idx] = temp;
    }
}
void closest_to_zero(int a[], int n) {
    selection_sort(a, n);

    int left = 0;
    int right = n - 1;
    int min_sum = a[left] + a[right];
    int res_left = left;
    int res_right = right;

    while (left < right) {
        int sum = a[left] + a[right];
        if (my_abs(sum) < my_abs(min_sum)) {
            min_sum = sum;
            res_left = left;
            res_right = right;
        }
        if (sum < 0)
            left++;
        else if (sum > 0)
            right--;
        else
            break;
    }
    if (a[res_left] < a[res_right])
        printf("%d %d\n", a[res_left], a[res_right]);
    else
        printf("%d %d\n", a[res_right], a[res_left]);
}
int main() {
    int n, i;

    printf("Enter n: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    closest_to_zero(a, n);
    return 0;
}