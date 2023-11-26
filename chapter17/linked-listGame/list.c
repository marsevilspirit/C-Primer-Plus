#include <stdio.h>
#include <stdlib.h>
#include "list.h"

void showLinked_list(struct Node *head,struct Node* current)        
{
    current = head;
    printf("head -> ");
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL"); 
}

void insertAtBeginning(struct Node** head, int data)
{
    struct Node * newBegin = (struct Node *)malloc(sizeof(struct Node));

    newBegin->data = data;
    newBegin->next = * head;
    * head = newBegin;
    return;
}

void insertAtEnd(struct Node** head, int data)
{
    struct Node * newEnd = (struct Node *)malloc(sizeof(struct Node));
    newEnd->data = data;
    newEnd->next = NULL;
    if(* head == NULL)
    {
        *head = newEnd;
    }
    else
    {
        struct Node * current = * head;
        while(current->next != NULL)
        {
            current = current->next;
        }
        current->next = newEnd;
    }
    return;
}

void insertAtPosition(struct Node** head, int data, int position)
{
    struct Node * newInsert = (struct Node *)malloc(sizeof(struct Node));
    newInsert->data = data;
    newInsert->next = NULL;

    struct Node * current = * head;
    struct Node * previous = NULL;

    for(int i = 1; i < position && current != NULL; i++)
    {
        previous = current;
        current = current->next;
    }
    if(current != NULL) 
    {
        previous->next = newInsert;
        newInsert->next = current; 
    }
}

void deleteAtBeginning(struct Node** head)
{
    struct Node* delete = * head;
    *head = (*head)->next;
    free(delete);
}

void deleteAtEnd(struct Node** head)
{
    struct Node * current = * head;
    struct Node * previous = NULL;

    if(current == NULL)
    {
        return;
    }

    while (current->next != NULL)
    {
        previous = current;
        current = current->next;  
    }
    
    if(previous != NULL)
    {
        previous->next = NULL;
    }
    else
    {
        *head = NULL;
    }
    free(current);
}

void deleteNodeAtPosition(struct Node** head, int position)
{
    if(*head == NULL)
    {
        return;
    }

    struct Node * current = * head;
    struct Node * previous = NULL;

    if(position == 1)
    {
        *head = current->next;
        free(current);
        return;
    }

    for(int i = 1; i < position && current != NULL; i++)
    {
        previous = current;
        current = current->next;
    }

    if(current != NULL)
    {
        previous->next = current->next;
        free(current);
    }
}

void deleteNode(struct Node** head, int key)
{
    if(*head == NULL)
    {
        return;
    }

    struct Node * current = *head;
    struct Node * previous = NULL;

    if(current->data == key)
    {
        * head = current->next;
        free(current);
        return;
    }

    while (current->next != NULL && current->data != key)
    {
        previous = current;
        current = current->next;
    }

    if(current->data == key)
    {
        previous->next = current->next;
        free(current);
    }
}

void sortList(struct Node** head)
{
    if(* head == NULL && (* head)->next == NULL)
    {
        return;
    }

    struct Node * i = * head;
    struct Node * j = NULL;
    
    while(i != NULL)
    {
        j = i->next;
        while (j != NULL)
        {
            if(i->data > j->data)
            {
                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
            j = j->next;
        }
        i = i->next;
    }

}

void reverseList(struct Node** head)
{
    if(*head == NULL)
    {
        return;
    }

    struct Node * current = * head;
    struct Node * previous = NULL;
    struct Node * next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = previous;
        previous = current;
        current = next;
    }

    * head = previous;
}

void free_linked_list(struct Node * head,struct Node* current)
{
    current = head;

    if(current == NULL)
    {
        return;
    }

    while (current != NULL)
    {
        struct Node * temp = current->next;
        free(current);
        current = temp;
    }
}
