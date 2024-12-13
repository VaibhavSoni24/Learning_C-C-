#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define size 5
int rear = -1, front = -1;
int queue[size];
int isfull()
{
    return rear==size-1;
}
int isempty()
{
    return front==-1 || front>rear;
}
void enqueue(int value)
{
    if(isfull())
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if(front==-1)
        front=0;
        rear++;
        queue[rear]=value;
        printf("%d enqueued into the queue\n",value);
    }
}
int dequeue()
{
    if(isempty())
    {
        printf("Queue Underflow\n");
    }
    else
    {
        printf("%d dequeued from the queue\n",queue[front]);
        front++;
    }
}
void display()
{
    if(isempty())
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue:\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d\n",queue[i]);
        }
    }
}
void clear_screen() 
{
    system("cls");
}
int main()
{
    int choice,val;
    clear_screen();
    printf("Entering the queue...\n");
    sleep(1);
    clear_screen();
    printf("Your queue's size is 5.\n");
    while(1)
    {
        printf("Queue Operations:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit Queue\n");
        printf("Enter a choice:");
        scanf("%d",&choice);
        clear_screen();
        switch (choice)
        {
        case 1:
            printf("Enter a value to enqueue:");
            scanf("%d",&val);
            enqueue(val);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("Your current queue is:-\n");
            display();
            printf("Exiting the queue...");
            sleep(1);
            exit(0);
        default:
            printf("Inavlid choice!\n");
            break;
        }
    }
    return 0;
}