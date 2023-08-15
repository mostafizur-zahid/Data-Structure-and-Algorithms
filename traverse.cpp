#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};

int main(){
    struct Node *a = NULL;
    struct Node *b = NULL;
    struct Node *c = NULL;

    a = (struct Node*)malloc(sizeof(struct Node));
    b = (struct Node*)malloc(sizeof(struct Node));
    c = (struct Node*)malloc(sizeof(struct Node));

    a->data = 100;
    b->data = 200;
    c->data = 300;

    a->next = b;
    b->next = c;
    c->next = NULL;

    //Travers a Linked List
    
    while(a != NULL){
        cout<<a->data<<" --> ";
        a = a->next;
    }

}