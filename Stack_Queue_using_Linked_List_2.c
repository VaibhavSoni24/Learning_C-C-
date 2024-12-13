#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
void push(int value)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    if (newnode == NULL)
    {
        printf("Memory allocation failed\n");
        return;
    }
    newnode->data = value;
    newnode->next = top;
    top = newnode;
}
void pop()
{
    if (top == NULL)
    {
        printf("Stack is underflow\n");
    } 
    else
    {
        printf("The popped element from stack: %d\n", top->data);
        struct node *temp = top;
        top = top->next;
        free(temp);
    }
}
void display()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
    } 
    else
    {
        struct node *ptr = top;
        printf("Stack elements are: ");
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}
int main()
{
    int ch, value;
    while (1)
    {
        printf("\n1. Push in stack\n");
        printf("2. Pop from stack\n");
        printf("3. Display stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch (ch) 
        {
            case 1:
                printf("Enter value to be pushed: ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}