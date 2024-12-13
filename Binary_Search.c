#include<stdio.h>
int main()
{
    int n, target, i, x;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &target);
    int l = 0, r = n - 1, mid;
    while(l <= r)
    {
        mid = (l + r) / 2;
        if(arr[mid] == target)
        {
            printf("Element %d found at index %d.\n", target, mid);
            x = 1;
            break;
        }
        else if(arr[mid] < target)
        {
            l = mid + 1;
        }
        else 
        {
            r = mid - 1;
        }
    }
    if(x != 1)
    {
        printf("Element %d not found in the array.\n", target);
    }
}