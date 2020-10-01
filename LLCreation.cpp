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
int len(){
	int l=0;
	node *p=s;
	while(p!=NULL){
		l=l+1;
		p=p->next;
	}
	return l;
}
void updateBack(){
	node *temp=s;
	int nno,l=0;
	printf("\nEnter node number to update  ");
	scanf("%d",&nno);
	l=len();
	l=l-nno;
	while(l>0){
		temp=temp->next;
		l--;
	}
	temp->data=(temp->data)*2;
	display();
	
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
	updateBack();
}
