//this is implementation stack  to Queue conversion 
//It only perform enqueue and dequeue operation
// If u want any operation,do it.
#include<stdio.h>
#include<stdlib.h>
struct link{
    int data;
    struct link * ptr;
};
struct link1{
    int data;
    struct link1* ptr;
};
/*Notes:
1.If you want from insert operation call enqueue()
2.If you want perorm deletion call dequeue()
*/
void enqueue(int),push2(int),dequeue();int pop1(),pop2();struct link* top=0;struct link1 *next=0;int c=0;
void main(){
    int n,ele;
    printf("enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("enter the element to enqueue:");
        scanf("%d",&ele);
        enqueue(ele);
        c++;
    }
    printf("\nThe deleted element:");
    dequeue();
    //printing remaining elements after delete the first element
    printf("\nremaining elements");
     for(int i=0;i<n-1;i++){
        printf("\n%d",top->data);
        top=top->ptr;
    }

}

void enqueue(int a){
    struct link* m=(struct link*)malloc(sizeof(struct link));
    m->data=a;
    m->ptr=top;
    top=m;
}

void push2(int a){
    struct link1* m=(struct link1*)malloc(sizeof(struct link1));
    m->data=a;
    m->ptr=next;
    next=m;
}
int pop1(){
    int item=top->data;
    top=top->ptr;
    return item;
}
int pop2(){
    int item=next->data;
    next=next->ptr;
    return item;
}

void dequeue(){
    for(int i=0;i<c;i++){
        push2(pop1());
    }
    printf("%d",pop2());
    for(int i=0;i<c-1;i++){
        enqueue(pop2());
    }
    
}