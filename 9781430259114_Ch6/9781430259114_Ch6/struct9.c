#include <malloc.h>
int main(int argc, char* argv[])
{														
	struct data											
	{														
		int i;													
		char c;													
		int j;													
		int arr[2];										
	};												
	struct datawptr											
	{														
		int i;													
		char *c;										
	};												
	struct datawptr dptr1;							
	struct datawptr dptr2;							
	struct data svar1;  // a normal variable of type struct data
	struct data svar2;  // a normal variable of type struct data	
	svar1.c = 'a';												
	svar1.i = 1;											
	svar1.j = 2;										
	svar1.arr[0] = 10;								
	svar1.arr[1] = 20;								
	svar2 = svar1;									
	printf("Value of Second variable \n");			
	printf("Member c = %c\n", svar2.c);				
	printf("Member i = %d\n", svar2.i);			
	printf("Member j = %d\n", svar2.j);			
	printf("Member arr0th = %d\n", svar2.arr[0]);	
	printf("Member arr1st = %d\n", svar2.arr[1]);	
	dptr1.i = 10;									
	dptr1.c = (char*)malloc(sizeof(char));			
	*(dptr1.c) = 'c';
	dptr2.c = (char*)malloc(sizeof(char));			
	dptr2 = dptr1;									
	printf("int member = %d\n", dptr2.i);			
	printf("char ptr member = %c\n", *(dptr2.c));	
	return 0;										 
}
