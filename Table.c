#include<stdio.h>
int main()
{
    int a,i;
    printf("Enter a value of which you want the table: ");
    scanf("%d",&a);
    printf("\nThe table is:\n");
    for(i=1;i<11;i++)
    {
        printf("%d*%d=%d\n",a,i,a*i);
    }
}