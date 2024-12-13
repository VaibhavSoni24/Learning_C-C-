#include<stdio.h>
int factorial(int a)
{
    if(a==0)
    {
        return 1;
    }
    else
    {
      return a*factorial(a-1);
    }
}
int main()
{
    int b,c;
    printf("Enter a value ");
    scanf("%d",&b);
    c=factorial(b);
    printf("The factorial of %d is = %d",b,c);
    return 0;
}