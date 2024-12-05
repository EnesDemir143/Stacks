#include<stdlib.h>
#include<stdio.h>

struct Node
{
    int val;
    struct Node* next;
};

void push(struct Node** Top,int val){
    struct Node* new_node=malloc(sizeof(struct Node));
    new_node->val=val;
    new_node->next=*Top;
    *Top=new_node;

}

void top(struct Node** Top){
    if(*Top!=NULL){
        printf("%d\n",(*Top)->val);
    }
}

void pop(struct Node** Top){
    if(*Top!=NULL){
        struct Node* temp=*Top;
        *Top=(*Top)->next;
        free(temp);
    }
}

int main(){
    
    struct Node* Top=NULL;
    push(&Top,4);
    top(&Top);
    push(&Top,5);
    top(&Top);
    pop(&Top);
    top(&Top);
}