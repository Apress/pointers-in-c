int main()
{		
	int num = 10;
	int *ptr = &num;
	int **mptr = &ptr;
	printf("Value of var num = %d\n", num);
	printf("Value of var num = %d\n", *ptr);
	printf("Value of var num = %d\n", **mptr);
	printf("Address of var num = %p\n", &num);
	printf("Address of var num = %p\n", ptr);	
	printf("Address of var num = %p\n", *mptr);
	printf("Address of pointer var ptr = %p\n",&ptr);
	printf("Address of pointer var ptr = %p\n",mptr);
	printf("Address of pointer var mptr = %p\n",&mptr);
	return 0;
}
