#include<stdio.h>
#include<process.h>
#include<stdlib.h>
typedef struct linknode{
	int data;
	struct linknode *next;
}node;
node *s;
void display(){
	node *p=s;
	while(p!=NULL){
		printf("%d ",p->data);
		p=p->next;
	}
}
void swap(){
	node *a,*b,*temp;
	int p1,p2,i;
	printf("\nEnter two positions to swap  ");
	scanf("%d%d",&p1,&p2);
	temp=(node*)malloc(sizeof(node));
	temp=s;
	for(i=1;i<p1;i++){
		temp=temp->next;
	}
	a=temp;
	temp=s;
	for(i=1;i<p2;i++){
		temp=temp->next;
	}
	b=temp;
	temp=NULL;
	
	printf("\na = %d , b = %d  \n",a->data,b->data);
	
	
//	temp->next=a->next;
//	a->next=b->next;
//	b->next=temp->next;
	
}
int main(){
	int i,x;
	node *temp,*next=NULL,*prev=NULL,*curr=NULL,*last,*q;
	printf("\nEnter num of nodes in first list ");
	scanf("%d",&x);
	for(i=0;i<x;i++){
		temp=(node*)malloc(sizeof(node));
		printf("\nEnter data: ");
		scanf("%d",&temp->data);
		temp->next=NULL;
		if(s==NULL){
			s=temp;
			last=temp;
		}
		else{
			last->next=temp;
			last=temp;
		}
	}
	display();
	swap();
	display();
}
