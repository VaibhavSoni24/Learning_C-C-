#include<stdio.h>
struct student
{
    char name[10];
    int roll;
    float marks;
};
int main()
{
    struct student s;
    printf("Enter the structure information");
    scanf("%s",&s.name);
    scanf("%d",&s.roll);
    scanf("%f",&s.marks);
    printf("%s\t",s.name);
    printf("%d\t",s.roll);
    printf("%f\t",s.marks);
}