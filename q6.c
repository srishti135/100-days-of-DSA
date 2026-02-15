/*Given a sorted array of n integers, remove duplicates in-place. 
Print only unique elements in order.*/
#include <stdio.h>
int main()
{
    int n;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    int arr[n]; 
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }   
    if (n == 0) {
        printf("No elements in the array.\n");
        return 0;
    }
    printf("Unique elements in the array:\n");
    printf("%d ", arr[0]); // Print the first element as it's always unique
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1]) // Check if the current element is different from the previous one
        {
            printf("%d ", arr[i]); // Print the unique element
        }
    }
    printf("\n");
    return 0;
}   