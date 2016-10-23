#include <stdio.h>
int main(int argc, char* argv[])	
{													
	struct data											
	{														
		int i;													
		char c;													
		int j;												
	};
	struct data *sptr; //pointer variable of type struct data	
	struct data svar;  // a normal variable of type struct data	
	sptr = (struct data*) malloc (sizeof(struct data));			
	//below code is accessing the member fields with help of arrow operator ->			
	sptr->c = 'c';											
	sptr->i = 10;										
	sptr->j = 20;	//or the same variable could be access in the following way 
	(*sptr).c = 'd';											
	(*sptr).i = 30;										
	(*sptr).j = 40;	//below code is accessing the member fields with help of dot operator     
	svar.c = 'a';											
	var.i = 1;											
	svar.j = 2;//or the same variable could be access in the following way, using address 	
	// of operator and arrow operator						
	(&svar)->c = 'c';							
	(&svar)->i = 3;								
	(&svar)->j = 4;								
	return 0;
}
