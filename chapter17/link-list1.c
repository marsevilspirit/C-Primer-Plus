#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node * next;
};

void insertAtBeginning(struct node** head, int data)
{
    struct node * newBegin = (struct node *)malloc(sizeof(struct node));

    newBegin->data = data;
    newBegin->next = * head;
    * head = newBegin;
    return;
}

int main(void)
{
    struct node * head = NULL;
    struct node * previous, *current;

    int n, i = 1;
    printf("第1个节点：");
    while(scanf("%d",&n) != EOF)
    {
        printf("第%d个节点: ",i+1);
        current = (struct node *)malloc(sizeof(struct node));
        if(head == NULL)
        {
            head = current;
        }
        else
        {
            previous->next = current;
        }
        current->next = NULL;
        current->data = n;
        previous = current;
        i++;
    }
    printf("\n");
    insertAtBeginning(&head, 9);
    current = head;
    while (current != NULL)
    {
        printf("%d ", current->data);
        current = current->next;
    }
    while (current != NULL)
    {
        current = head; 
        head = current->next;
        free(current);
    }
    printf("\n");
    return 0;
}
