#include<stdio.h>
int main()
{
    int max, target, i, x;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &max);
    int arr[max];
    printf("Enter %d elements:\n", max);
    for (int i = 0; i < max; i++) 
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &target);
    for (int i = 0; i < max; i++) 
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