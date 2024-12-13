#include<stdio.h>
int main()
{
    int i=0,n;
    printf("Enter the last number of counting: ");
    scanf("%d",&n);
    do
    {
        i=i+1;
        printf("%d\n",i);
    }
    while(i<n);
}