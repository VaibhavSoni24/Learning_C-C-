#include<stdio.h>
#include <stdlib.h>
void clear_screen();
int main()
{
    printf("You Won!\n");
    printf("Because the other player has left the game due to your fear.");
    return 0;
}
void clear_screen()
{
    system("cls");
}