int add( int a, int b)										              
{													
	int z = a + b ;											
	return z;										              
}
int sub(int a, int b)										
{													
	int z = a - b;											
	return z;										                
}
int mul(int a, int b)										             
{													
	int z = a*b;											
	return z;										                  
}
int div(int a, int b)										                 
{													
	int z = a/b;												
	return z;										             
}
//array of function pointers, 
int (* opfunctptr [ ] ) ( int x, int y) = { add, sub, mul, div };
typedef int (*calc)(int x, int y );
//function returning the function pointer of type int (*calc)(int x, int y )
calc retmathfunc(int index)									              
{													
	return opfunctptr[index];								              
}
int main(int argc, char* argv[])								                  
{													
	int choice, p1, p2, res;										
	int (*calculator)(int x, int y);									
	printf("Type -1 to quit\n");								
	printf("Type 0 - add, 1 - sub, 2 - mul, 3 - div\n");						
	scanf("%d", &choice);										
	while( choice != -1)											
	{														
		calculator = retmathfunc(choice);	//returns function pointer          				
		printf("Param1\n");											
		scanf("%d", &p1);											
		printf("Param2\n");											
		scanf("%d", &p2);											
		res = calculator(p1, p2);	//calling function pointer						
		printf("res = %d\n", res);										
		printf("Type 0 - add, 1 - sub, 2 - mul, 3 - div\n");							
		scanf("%d", &choice);										
	}												
	return 0;										           
}
