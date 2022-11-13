/*NOTES:

Deque implementation
1.insert(both end) and delete(one end)-----can be used as  stack as well as queue
2.insert(one end) and delete(both end)-----can be used as  stack as well as queue
*/


#include<stdio.h>
#include<stdlib.h>
//Doubly linked list-Deque implementation
struct link{
    struct link* previous;
    int data;
    struct link* next;};
//Varaiables
struct link* front=0,*rear=0;
//Require function creation
void enqueueFront(int),enqueueRear(int),display();int dequeueFront(),dequeueRear(),getFront(),getRear();

//Main function for your demo
void main(){
    
//inserting front
    enqueueFront(5);
    enqueueFront(6);
    enqueueFront(10);

//inserting end
    enqueueRear(1000);
    enqueueRear(21);
    enqueueRear(599);  

//deleting front
    printf("\n\nThe deleted element at front :%d",dequeueFront());
//deleting rear
    printf("\n\nThe deleted element at final :%d",dequeueRear());

//get at front
    printf("\n\nThe  element at front :%d",getFront());

//get at rear
    printf("\n\nThe  element at Rear :%d",getRear());

//Displaying all the contents
display();

}
//Insertion at front
void enqueueFront(int a){
    struct link* newnode=(struct link*)malloc(sizeof(struct link));
    newnode->data=a;
    if(front==0 && rear==0){
        front=newnode;
        rear=newnode;}
    else{
        front->previous=newnode;
        newnode->next=front;
        front=newnode;
        }}

//Insertion at rear
void enqueueRear(int a){
    struct link* newnode=(struct link*)malloc(sizeof(struct link));
    newnode->data=a;
    if(front==0 && rear==0){
        front=newnode;
        rear=newnode;}
    else{
       rear->next=newnode;
       newnode->previous=rear;
       rear=newnode;
        }}

//deletion at front
int dequeueFront(){
    if(front==0 && rear==0){
        printf("UnderFlow");
        return 0;
    }
    int item=front->data;
    front->next->previous=0;
    front=front->next;
    return item;
}
//deletion at Rear
int dequeueRear(){
    if(front==0 && rear==0){
        printf("UnderFlow");
        return 0;
    }
    int item=rear->data;
    rear->previous->next=0;
    rear=rear->previous;
    return item;
}

//get current front element
int getFront(){
    if(front==0 && rear==0){
        printf("UnderFlow");
        return 0;
    }
    return front->data;
}
//get current rear element
int getRear(){
    if(front==0 && rear==0){
        printf("UnderFlow");
        return 0;
    }
    return rear->data;
}



//display function
void display(){
    if(front==0 && rear==0){
        printf("UnderFlow");
    }else{
    while(front->data)
    {
        printf("\n\nElements :%d",front->data);
        front=front->next;
    }}
    
}