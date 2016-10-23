#include <malloc.h>                                                                                                                                    
#include <stdio.h>                                                                                                                                             
void mesg(int num )                                                                                                                                               
{                                                                                                                                                                                                          
	printf("Mesg no. %d\n", num);							                   
}
int main(int argc, char* argv[])								                
{ 													
	int *t;												
	void (*fpmsg1)(int);		//function pointer variable to point the function “mesg”		
	void (*fpmsg2)(int);                 //function pointer variable to point the function “mesg”		
	fpmsg1 = mesg;											
	fpmsg2 = mesg;										
	fpmsg1( 10 );    	// implicit method of invoking a function	
	(*)fpmsg2( 20 );	 // explicit way of invoking a function		
	return 0;
}
