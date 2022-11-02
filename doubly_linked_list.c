#include<stdio.h>
#include<stdlib.h>
struct link{
    struct link *ptr;
    int data;
    struct link *str;
};

void main(){
    struct link* ddl();
    struct link* head=0,*temp,*m,*pre=0,*ins,*p;
    printf("NO:");
    int k;
    scanf("%d",&k);
    for(int i=0;i<k;i++){
        m=ddl();
        if(head==0){
            head=m;
            temp=m;
            p=m;
            }

        else{
            temp->ptr=pre;
            temp->str=m;
            pre=temp;
            temp=m;
        }}
           temp->ptr=pre;
    

  for(int i=0;i<k+1;i++){
        printf("\np: %d d: %d n:%d",head->ptr,head->data,head->str);
        head=head->str;
    }
}

struct link* ddl(){
    struct link* newnode=(struct link*)malloc(sizeof(struct link));
    newnode->ptr=0;
    printf("enter the data");
    scanf("%d",&newnode->data);
    newnode->str=0;
    return newnode;

}