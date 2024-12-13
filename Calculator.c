#include<stdio.h>
int main()
{
    char x[1];
    float a,b,c;
    printf("Enter a opetation you want to perform-<+,-,*,/>: ");
    scanf("%c",&x[1]);
    printf("\nEnter the first operand: ");
    scanf("%f",&a);
    printf("\nEnter second operand: ");
    scanf("%f",&b);
    switch (x[1])
    {
        case'+':
            c=a+b;
            printf("\nThe addition is %f.",c);
            break;
        case'-':
            c=a-b;
            printf("\nThe subtraction is %f.",c);
            break;
        case'*':
            c=a*b;
            printf("\nThe multiplication is %f.",c);
            break;
        case'/':
            c=a/b;
            printf("\nThe division is %f.",c);
            break;
        default:
            printf("\nYou did not entered a given opetation!");
    }
}