#include<stdio.h>
int main ()
{
    float Kg,Pound,Ton;
    char weight[1];
    printf("Enter weight in Kg: ");
    scanf("\n%f",&Kg);
    printf("Enter weight unit, either Pound(P) or Ton(T)");
    scanf("\n%c",&weight[1]);
    switch(weight[1])
    {
        case'P':
        {
            Pound=Kg*2.20462262;
            printf("\n%f kg = %f pounds.",Kg,Pound);
            break;
        }
        case'T':
        {
            Ton=Kg/1000;
            printf("\n%f kg = %f tons.",Kg,Ton);
            break;
        }
        default:
        printf("You entered wrong unit.");
    }
    return 0;
}