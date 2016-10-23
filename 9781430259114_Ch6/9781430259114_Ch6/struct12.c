struct node		
{
	int data;	
	char c;		
};
int main()		
{													
	struct node v1;										
	struct node* p1 = &v1;							
	foo_passbyvalue( v1);							
	foo_passbyaddr( p1 );						
}
void foo_passbyvalue(struct node v)				
{
	//do something
}
void foo_passbyaddr(struct node* p)				
{													
	//do something									      
}
