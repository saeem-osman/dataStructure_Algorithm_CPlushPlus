//basic queue operation



#include<iostream>
using namespace std;
#define max_size 100

typedef struct{

int data[max_size];
int front, rear;

} Queue;

void enqueue(Queue *q, int value){

if(q->data[q->rear+1] == max_size){
    cout<<"Queue is full";
}else{
    q->data[q->rear] = value;
    q->rear = q->rear + 1;
}

}

int dequeue(Queue *q){
int item;
if(q->front == q->rear){
    cout<<"Queue is empty";
}else{
    item = q->data[q->front];
    q->front = q->front + 1;
}
return item;

}

int main(){


Queue myQueue;
myQueue.front = 0;
myQueue.rear = 0;

enqueue(&myQueue, 10);
enqueue(&myQueue, 20);
enqueue(&myQueue, 50);
enqueue(&myQueue, 80);
enqueue(&myQueue, 40);

cout<<"Head and tail value: "<<myQueue.data[myQueue.front]<<" "<<myQueue.data[myQueue.rear - 1]<<endl;

dequeue(&myQueue);
dequeue(&myQueue);
dequeue(&myQueue);
cout<<"Head and tail value: "<<myQueue.data[myQueue.front]<<" "<<myQueue.data[myQueue.rear - 1];



}
