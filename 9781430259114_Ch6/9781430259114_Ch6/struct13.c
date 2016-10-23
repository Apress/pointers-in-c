struct node		
{													
	int data;										      
};
void addnode(struct node* n1)							
{													
	n1 = (struct node*)malloc(sizeof(struct node));	
	n1->data = 9;									
}
int main(int argc, char* argv[])
{
	struct node* n1 = NULL;
	addnode(n1);
	return 0;
}
