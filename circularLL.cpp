#include<stdio.h>
#include<process.h>
#include<stdlib.h>
typedef struct linknode{
	int data;
	struct linknode *next;
}node;
void enqueue();
void dequeue();
void display();

node *last,*temp;

int main(){
	 int ch;
    while(1){
        printf("\nEnter\n1: Enqueue\n2: Dequeue\n3: Display\n4: Exit: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                enqueue();
            break;
            case 2:
                dequeue();
            break;
            
            case 3:
                display();
            break;
            case 4:
                exit(0);
            default:
                printf("\nWrong Choice\n");
        }
    }
    
return 0;
}

void enqueue(){
	temp=(node*)malloc(sizeof(node));
	int n;
	printf("Enter value  ");
	scanf("%d",&n);
	temp->data=n;
	temp->next=NULL;
	if(last==NULL){
		last=temp;
		last->next=last;
	}else{
		temp->next=last->next;
		last->next=temp;
		last=temp;
	}	
}
void dequeue(){
	if(last==NULL){
		printf("Underflow");
	}else if(last->next==last){
		free(last);
		last=NULL;		
	}else{
		temp=last->next;
		last->next=temp->next;
		free(temp);
	}
	
}
void display(){
    if(last==NULL)
        printf("\nUnderflow\n");
    else{
        temp=last->next;
        do{
            printf("%d ",temp->data);
            temp=temp->next;
        }while(temp != last->next);
    }
}
