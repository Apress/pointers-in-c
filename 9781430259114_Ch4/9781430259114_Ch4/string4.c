int* foo(void); 
int main(int argc, char* argv[])								            
{														
	int *m = foo();									
	printf("Printing local value of function foo = %d\n", *m);
	return 0;
}
int* foo(void)											             
{													
	int i = 10;											
	return &i;										               \
}
