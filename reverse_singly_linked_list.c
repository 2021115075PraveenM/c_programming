#include<stdio.h>
#include<stdlib.h>
struct link{
    int data;
    struct link * ptr;
};
void main(){
    struct link* create(),*head=NULL,*tail,*m,*rev;
    for(int i=0;i<5;i++){
        m=create();
        if(head==NULL){
            head=m;
            rev=m;
            tail=m;
        }
        else{
            tail->ptr=m;
            tail=m;
        }

    }
    tail->ptr=head;
    printf("\n%d",rev);
    for(int i=0;i<5;i++){
        printf("\n%d,,,,,,ADD:%d",rev->data,rev->ptr);
        rev=rev->ptr;
    }
    

struct link* current,*pre=0,*next,*pres;
for(int i=0;i<6;i++){
    if(i==0){
        current=head;
        next=head->ptr;

    }else{
        current->ptr=pre;
        pres=pre;
        pre=current;
        current=next;
        next=next->ptr;

}
}
head->ptr=pre;
head=pre;
printf("\n%d",head);
printf("*******************\n***************\n****************");
for(int i=0;i<5;i++){
     printf("\n%d,,,,,,ADD:%d",head->data,head->ptr);
        head=head->ptr;

}

}
 struct link* create(){
    struct link* node;
    node=(struct link*)malloc(sizeof(struct link));
    printf("Enter the data");
    scanf("%d",&node->data);
    node->ptr=0;
    return node;
 };