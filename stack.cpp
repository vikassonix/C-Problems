#include<stdio.h>
#include<process.h>
#include<stdlib.h>
typedef struct linknode{
	int data;
	struct linknode *next;
}node;
node *top;
void push(int);
void pop();
void display();

int main(){
        int ch,num;
        while(1){
            printf("\nEnter\n1: Push\n2: Pop\n3: Display\n4: Exit\n");
            scanf("%d",&ch);
            switch(ch){
                case 1:
                    printf("\nEnter new value: ");
                    scanf("%d",&num);
                    push(num);
                break;
                case 2:
                    pop();
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

void push(int n){
	node *temp;
	temp=(node*)malloc(sizeof(node));
	temp->next=NULL;
	temp->data=n;
	
	if(top==NULL){
		top=temp;
	}else{
		temp->next=top;
		top=temp;
	}	
}
void pop(){
	node *temp;
	if(top==NULL){
		printf("Underflow");
	}else{
		temp=top;
		top=top->next;
		free(temp);
	}	
}
void display(){
	node *temp=top;
	
	while(temp!=NULL){
		printf("%d ",temp->data);
		temp=temp->next;
	}	
}
