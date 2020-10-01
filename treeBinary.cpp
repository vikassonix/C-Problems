//Binary Search Tree
#include<stdio.h>
#include<stdlib.h>
typedef struct tnode{
	struct tnode *l;
	int info;
	struct tnode *r;
}node;
node *root,*temp;
int count=0,cl=0;
void preorder(node *ptr);
void inorder(node *ptr);
void postorder(node *ptr);
void create();
void search();
void countNodes();
int countLeaf(node *);
int countNonLeaf(node *);
int main(){
	int ch;
	
	while(1){
		printf("\nEnter choice : \n1. Create\n2. Preorder\n3. Inorder \n4. Postorder \n5. Search \n6. Count Nodes \n7. Count Leaf \n8. Count Non Leaf\n9. Exit \n");
		scanf("%d",&ch);
		switch(ch){
			case 1: create();
			break;
			case 2: preorder(root);
			break;
			case 3: inorder(root);
			break;
			case 4: postorder(root);
			break;
			case 5: search();
			break;
			case 6: countNodes();
			break;
			case 7:cl= countLeaf(root);
			printf("Leaf Nodes : %d",cl);
			break;
			case 8:cl= countNonLeaf(root);
			printf("Non Leaf Nodes : %d",cl);
			break;
			case 9: exit(0);
			break;		
		}
	}
return 0;
}
void create(){
	count++;
    node *ptr,*prevptr;
    temp=(node*)malloc(sizeof(node));
    temp->l=NULL;
    temp->r=NULL;
    printf("\nEnter data : ");
    scanf("%d",&temp->info);
    if(root==NULL){
        root=temp;
    }
    else{
        ptr=root;
        while(ptr!=NULL){
            prevptr=ptr;
            if(temp->info<ptr->info){
                ptr=ptr->l;
                if(ptr==NULL)
                    prevptr->l=temp;
            }
            else{
                ptr=ptr->r;
                if(ptr==NULL)
                    prevptr->r=temp;       
            }
        }   
    }
}
void preorder(node *ptr){
    if(ptr!=NULL){
        printf("%d ",ptr->info);
        preorder(ptr->l);
        preorder(ptr->r);
    }
}
void inorder(node *ptr){
    if(ptr!=NULL){
        inorder(ptr->l);
        printf("%d ",ptr->info);
        inorder(ptr->r);
    }
}

void postorder(node *ptr){
    if(ptr!=NULL){
        postorder(ptr->l);
        postorder(ptr->r);
        printf("%d ",ptr->info);
    }
}

void search(){
	node *ptr,*prevptr;
	int el,f=0;
	printf("Enter element to search : ");
	scanf("%d",&el);
	if(root==NULL){
        printf("No elements found");
    }
    else{
        ptr=root;
        while(ptr!=NULL){
        	if(ptr->info==el){
        		f=1;
        		break;
			}
            prevptr=ptr;
            if(temp->info<ptr->info){
                ptr=ptr->l;
                if(ptr==NULL)
                    prevptr->l=temp;
            }
            else{
                ptr=ptr->r;
                if(ptr==NULL)
                    prevptr->r=temp;       
            }
        }
		if(f){
			printf("Yes");
		}else{
			printf("No");
		} 
    }
}
void countNodes(){
	printf("Total Nodes : %d",count);
}
int countLeaf(node *ptr){
	  if(ptr==NULL)
        return 0;
    if(ptr->l==NULL && ptr->r==NULL)
        return 1;
    else
        return countLeaf(ptr->l)+countLeaf(ptr->r);
}
//int countNonLeaf(node *ptr){
//    int x=countLeaf(root);
//    return count-x;
//}
int countNonLeaf(node *ptr){
    if(ptr==NULL||(ptr->l==NULL&&ptr->r==NULL))
        return 0;
    return 1+countNonLeaf(ptr->r)+countNonLeaf(ptr->l);
}







