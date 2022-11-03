#include<stdio.h>
#include<stdlib.h>
struct stack{
    int data;
    struct stack* ptr;
};
void push(int);int pop(),isempty(),contains(int),peek();struct stack* top=0;
void main(){
    int n,ele;
    printf("\nEnter the number of elements:");scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the element for push:");
        scanf("%d",&ele);
        push(ele);
        
    }
    printf("\nPop first 2 elemetns:");
    for(int i=0;i<2;i++){
        printf("\n element %d : %d",n-i,pop());
    }
    printf("\nThe top element using peek function: %d",peek());
    printf("\ncheck the element 10 is pressent using contains operation :");
    printf("%d",contains(10));


}


void push(int a){
    struct stack* m=(struct stack*)malloc(sizeof(struct stack));
    m->data=a;
    m->ptr=top;
    top=m;}

int pop(){
    int item=top->data;
    top=top->ptr;
    return item;}

int isempty(){
    if(top==0){
        return 1;
    }}



int contains(int b){
    while(top->data!=b){
        top=top->ptr;}
    if(top->data==b){
        return 1;
    }
}

int peek(){
    return top->data;
}