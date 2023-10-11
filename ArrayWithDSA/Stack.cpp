#include<iostream>
using namespace std;
#define stack_max 100

typedef struct {
    int top;
    int data[stack_max];
}stack;

void push(stack *p,int item){
    if(p->top < stack_max){
        p->data[p->top]=item;
        p->top = p->top + 1;

    }
    else{
        cout<<"Stack is full"<< endl;
    }
}

int pop(stack *p){
    int item;
    if(p->top==0){
        cout<<"Stack is Empty"<<endl;
        return -1;
    }
    else{
        p->top = p->top - 1;
        item = p->data[p->top];
    }
    return item;

}

int main(){
    stack my_stack;
    int item;

    my_stack.top = 0;
    push(&my_stack,1);
    push(&my_stack,2);
    push(&my_stack,3);

    item = pop(&my_stack);
    cout<<item<<endl;

}

