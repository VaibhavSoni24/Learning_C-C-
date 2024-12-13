#include<stdio.h>
#include <stdlib.h>      //not completed
int main()
{
    int n, target, i, x;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++) 
    {
        if (arr[i] == target) 
        {
            printf("Element %d, found at index %d.\n", target, i);
            x = 1;
        }
    }
    if (x != 1)
    {
        printf("Element %d not found in the array.\n", target);
    }
    return 0;
}