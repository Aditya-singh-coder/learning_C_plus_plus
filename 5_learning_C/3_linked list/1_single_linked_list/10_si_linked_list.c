// deleting node from start
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};

struct node *del_first(struct node *head){
    if(head == NULL){
        printf("list is already empty");
    }
    else{
        struct node *temp= head;
        head= head-> link;
        free(temp);
    }
    return head;
}
int main(){
    struct node *head = del_first(head);
    struct node *ptr = head;
    while(ptr != NULL)
    {
        printf("%d",ptr->data);
        ptr=ptr->link;
    }
}