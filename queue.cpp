#include<stdio.h>
#include<process.h>
#include<stdlib.h>
typedef struct linknode{
	int data;
	struct linknode *next;
}node;
node *f,*r;
void enqueue(int);
void dequeue();
void display();

int main(){
        int ch,num;
        while(1){
            printf("\nEnter\n1: Enqueue\n2: Dequeue\n3: Display\n4: Exit\n");
            scanf("%d",&ch);
            switch(ch){
                case 1:
                    printf("\nEnter new value: ");
                    scanf("%d",&num);
                    enqueue(num);
                break;
                case 2:
                    dequeue();
                break;
                case 3:
                    display();
                break;
                case 4:
                    exit(0);
                break;
                default:
                    printf("\nWrong Choice\n");
 
  }
        }
return 0;
}

void enqueue(int n){
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->next=NULL;
	temp->data=n;
	
	if(r==NULL){
		f=r=temp;
	}else{
		r->next=temp;
		r=r->next;
	}	
}
void dequeue(){
	node *temp;
	if(f==NULL){
		printf("Underflow");
	}else{
		temp=f;
		f=f->next;
		free(temp);
		if(f==NULL){
			r=NULL;
		}
	}	
}
void display(){
	node *temp=f;
	
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}	
}
