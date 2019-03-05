//stack operation

#include<iostream>
using namespace std;
#define max_size 100

typedef struct {
    int top;
    int data[max_size];

} Stack;

void push(Stack *s, int item){


if(s->top < max_size){
    s->data[s->top] = item;
    s->top = s->top + 1;
}else{
    cout<<"Stack is full";
}

}

int pop(Stack *s){
    int item;
    if(s->top == 0){
        cout<<"Stack is empty."<<endl;
        return -1;
    }else{
        item = s->data[s->top -1];
        s->top = s->top -1;


    return item;

}
}


int main(){

Stack my_stack;
int item;
my_stack.top = 0;

push(&my_stack, 4);
push(&my_stack, 6);
cout<<"Top is: "<<my_stack.top<<endl;
cout<<"Top item in the stack: "<<my_stack.data[my_stack.top-1];
pop(&my_stack);
cout<<"Top item in the stack: "<<my_stack.data[my_stack.top-1];


}
