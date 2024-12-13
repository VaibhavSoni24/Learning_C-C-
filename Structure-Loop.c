#include<stdio.h>
struct student
{
    char name[10];
    int roll;
    float marks;
};
int main()
{
    int i=5;
    struct student s[i];
    printf("Enter the structure information");
    for(i=0;i<3;i++)
    {
        scanf("%s",&s[i].name);
        scanf("%d",&s[i].roll);
        scanf("%f",&s[i].marks);
    }
    for(i=0;i<3;i++)
    {
        printf("%s\t",s[i].name);
        printf("%d\t",s[i].roll);
        printf("%f\t",s[i].marks);
        printf("\n");
    }
}