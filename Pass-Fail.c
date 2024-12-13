#include<stdio.h>
int main()
{
    int a;
    printf("Enter 1 if you have passed in both math and science.\nEnter 2 if you have passes in either math or science.\nEnter 3 if you have't passes in any of them.\n");
    scanf("%d",&a);
    if(a==1)
    {
        printf("Congratulations, You have won 45 rupees.");
    }
    else if(a==2)
    {
        printf("Congratulations, You have won 15 rupees.");
    }
    else if(a==3)
    {
        printf("You have won nothing.");
    }
    else
    {
        printf("You entered wrong number.");
    }
}