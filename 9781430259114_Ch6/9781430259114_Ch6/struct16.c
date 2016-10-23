#include <malloc.h>						
#include <stdio.h>
struct node					
{													
	int data;											
	struct node* next;								
};

struct node* createnode(int data)					
{													
	struct node* n1 = (struct node*)malloc(sizeof(struct node));	
	n1->data = data;										
	n1->next = NULL;										
	return n1;										     
}

void addatend(struct node** root, struct node* n)		
{													
	struct node* temp = *root;						
	if(temp == NULL)								
	{												
		*root = n;									
	}												
	else											
	{												
		while(temp->next != NULL)					
			temp = temp->next;						
		temp->next = n;										
	}											         
}
int main(int argc, char* argv[])
{													
	struct node* root = NULL;						
	for(int i = 0; i< 10;i++)						
	{
		addatend(&root, createnode(i));				
	}												
	return 0;										
}
