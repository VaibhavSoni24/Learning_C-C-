#include<stdio.h>
int main()
{
    int i=1,n;
    printf("Enter the last number of counting: ");
    scanf("%d",&n);
    while(i<n+1)
    {
        printf("%d\n",i);
        i=i+1;
    }
}