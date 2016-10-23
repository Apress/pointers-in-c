#include <malloc.h> 
#include <stdio.h>  
void mesg(int num ) 
{                                                                                                                                                                                                          
	printf("Mesg no. %d\n", num);
}
int* add(int x, int y)          
{                                 
	int *z = (int*)malloc(sizeof(int));	
	*z = 10;							
	return z;							
}
int main(int argc, char* argv[])			
{ 											
	int *t;									
	void (*fpmsg)(int);		//function pointer variable to point the function “mesg”		
	int* (*addfptr)(int, int);          //function pointer variable to point the function “add”	
	addfptr = &add;		//assignment using address of operator				
	fpmsg = mesg;			//assignment using implicit method			
	return 0;
}
