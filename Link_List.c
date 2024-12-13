#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
struct Node 
{
    int data;
    struct Node* next;
};
struct Node* createNode(int data) 
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) 
    {
        printf("Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
void insertAtPosition(struct Node** head, int data, int position) 
{
    struct Node* newNode = createNode(data);
    if (position == 0) 
    {
        newNode->next = *head;
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    for (int i = 1; temp != NULL && i < position - 1; i++) 
    {
        temp = temp->next;
    }
    if (temp == NULL) 
    {
        printf("Position out of bounds\n");
        free(newNode);
        return;
    }
    newNode->next = temp->next;
    temp->next = newNode;
}
void deleteAtPosition(struct Node** head, int position) 
{
    if (*head == NULL) 
    {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = *head;
    if (position == 0) 
    {
        *head = temp->next;
        free(temp);
        return;
    }
    struct Node* prev = NULL;
    for (int i = 1; temp != NULL && i < position; i++) 
    {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) 
    {
        printf("Position out of bounds\n");
        return;
    }
    prev->next = temp->next;
    free(temp);
}
void displayList(struct Node* head) 
{
    if (head == NULL) 
    {
        printf("List is empty\n");
        return;
    }
    struct Node* temp = head;
    while (temp != NULL) 
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}
void clear_screen() 
{
    system("cls");
}
int main() 
{
    struct Node* head = NULL;
    int choice, data, position, varun;
    varun = 0;
    while (1) 
    {
        varun++;
        printf("\n1. Insert at position\n2. Delete from position\n3. Display list\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                printf("Enter position: ");
                scanf("%d", &position);
                insertAtPosition(&head, data, position);
                break;
            case 2:
                printf("Enter position to delete: ");
                scanf("%d", &position);
                deleteAtPosition(&head, position);
                break;
            case 3:
                printf("Current Linked List: ");
                displayList(head);
                break;
            case 4:
                printf("Exiting...\n");
                exit(0);
            default:
                printf("Invalid choice, try again.\n");
        }
        if(varun%2==0)
        {
            clear_screen();
        }
    }
    return 0;
}