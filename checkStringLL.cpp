#include<stdio.h>
#include<process.h>
#include<stdlib.h>
typedef struct linknode{
	char data;
	struct linknode *next;
}node;
node *s1,*s2,*temp,*last,*p,*p2;
int compare(node* head1,node* head2){
    
    while(head1&&head2)
    {
        if(head1->data==head2->data)
        {
            head1 = head1->next;
            head2 = head2->next;
        }
        else{
            
            return head1->data-head2->data;
            
        }
    }    
    if(head1){
        return 1;
    }
    else if(head2){
        return -1;
    }
    
    return 0;
}

int main(){
	int n,i;
	node *temp,*last,*p;
	printf("\nEnter num of nodes in first list ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=(node*)malloc(sizeof(node));
		printf("\nEnter data: ");
		fflush(stdin);
		scanf("%c",&temp->data);
		temp->next=NULL;
		if(s1==NULL){
			s1=temp;
			last=temp;
		}
		else{
			last->next=temp;
			last=last->next;
		}
	}
	p=s1;
	while(p!=NULL){
		printf("%c ",p->data);
		p=p->next;
	}
printf("\nEnter num of nodes in second list ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		temp=(node*)malloc(sizeof(node));
		printf("\nEnter data: ");
		fflush(stdin);
		scanf("%c",&temp->data);
		temp->next=NULL;
		if(s2==NULL){
			s2=temp;
			last=temp;
		}
		else{
			last->next=temp;
			last=last->next;
		}
	}
	p=s2;
	while(p!=NULL){
		printf("%c ",p->data);
		p=p->next;
	}
	p=s1;
	p2=s2;
	printf("\nDifference  %d",compare(p,p2));
	
}


