#include<stdio.h>
#include<stdlib.h>
int mian ()
{
    FILE* FP;
    char FName[20];
    printf("Enter hte file name to create.");
    scanf("%c",&FName[20]);
    FP = fopen(FName,"w");
    if(FP==NULL)
    {
        printf("File did not created.");
        exit(0);
    }
    printf("File created successfully.");
    putc('A',FP);
    putc('B',FP);
    putc('C',FP);
    fclose(FP);
    FP = fopen(FName,"r");
    if(FP==NULL)
    {
        printf("File did not creadted.");
        exit(0);
    }
    printf("File content=");
    printf("%c",getc(FP));
    printf("%c",getc(FP));
    printf("%c",getc(FP));
    fclose(FP);
}