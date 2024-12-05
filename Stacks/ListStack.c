#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>
#define MAX_SIZE 2
int top =-1;
int stack[MAX_SIZE];

bool isFull(){
    return top==MAX_SIZE-1 ;
}

bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}

void Push(int ver){
    if(isFull()){
        printf("Zaten dolu\n");
        return;
    }
    stack[++top]=ver;
}

void Pop(){
    if(isEmpty()){
        printf("Pop yapılamıyor zaten empty stack\n");
        return;
    }
    top--;
}

void Top(){
    if(isEmpty()){
        printf("Boş zaten \n");
        return;
    }
    else{
        printf("Top:%d\n",stack[top]);
    }

}



int main() {
    Pop();
    Push(5);
    Top();
    Push(4);
    Push(3);
    Top();
    Pop();
    Top();
}