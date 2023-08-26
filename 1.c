#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next, *prev;
}*head;

void createlist(int n){
    struct node *newnode, *temp;
    head = (struct node*) malloc(sizeof(struct node));
    printf("Enter the value of first node\n");
    scanf("%d", &head->data);
    head->next = NULL;
    head->prev = NULL;
    temp = head;
    for(int i=1; i<n; i++){
        newnode = (struct node*) malloc(sizeof(struct node));
        printf("Enter node-%d data\n", i+1);
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        newnode->prev = temp;
        temp->next=newnode;
        temp = newnode;
    }
}

void displaylist(){
    struct node *temp;
    temp=head;
    printf("Display list\n");
    while(temp!=NULL){
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}

int main()
{
    createlist(4);
    displaylist();
    return 0;
}