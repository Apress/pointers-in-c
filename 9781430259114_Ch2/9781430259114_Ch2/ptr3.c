struct node{   
    int a;     
	int b;
};
int  main()   
{
   	struct node p;
	printf("Address of node = %p\n",&p);
	printf("Address of member variable a = %p\n", &(p.a));
	printf("Address of member variable b = %p\n", &(p.b));
	return 0;
}
