char* foo(void);
int main(int argc, char* argv[])
{													
	char *m = foo();								
	printf("Printing local value of function foo = %s\n", m);
	return 0;										            
}
char* foo(void)			
{													
	char* str = "STRING";										
	return str;										            
}
