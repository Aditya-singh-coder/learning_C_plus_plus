// making a linked list 
//method 2

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

int main(){
    struct node *head =malloc(sizeof(struct node));
    head->data=45;
    head->link=NULL;

    struct node *current =malloc(sizeof(struct node));
    current->data=15;
    current->link =NULL;
    head->link=current;

    //shifting "current" variable to point at 3rd node.
    current=malloc(sizeof(struct node));
    current->data=22;
    current->link=NULL;
    head->link->link=current;
    return 0;
}