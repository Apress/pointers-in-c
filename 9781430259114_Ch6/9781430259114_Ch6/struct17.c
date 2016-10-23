#include <string.h>
#include <malloc.h>
#include <stdio.h>
struct node			
{					
	int data;			
	struct node* left;	
	struct node* right;	
};

struct node* createnode(int data)
{									
	struct node* n1 = (struct node*)malloc(sizeof(struct node));
	n1->data = data;										
	n1->left = NULL;										
	n1->right = NULL;									
	return n1;										     
}
void insertnode(struct node** root, struct node* n)		
{														
	struct node* temp = *root;							
	if(temp == NULL)									
	{													
		*root = n;										
	}												
	else											
	{												
		if(n->data < temp->data)					
		{											
			insertnode(&(temp->left), n);			
		}											
		else if( n->data > temp->data)				
		{											
			insertnode(&(temp->right), n);			
		}
	}
}
int main(int argc, char* argv[])					
{
	struct node* root = NULL;						
	for(int i = 0; i< 10;i++)						
	{												
		insertnode(&root, createnode(i));			
	}												
	return 0;										
}
