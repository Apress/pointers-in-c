int main(int argc, char* argv[])
{														
	struct datawptr										
	{														
		int i;													
		char *c;							
	};													
	struct datawptr dptr1;							
	struct datawptr dptr2;							
	dptr1.i = 10;									
	dptr1.c = (char*)malloc(sizeof(char));			
	*(dptr1.c) = 'c';								
	dptr2.c = (char*)malloc(sizeof(char));			
	memcpy(&dptr2, &dptr1, sizeof(struct datawptr));	
	printf("Int member value of 2nd variable = %d\n", dptr2.i);		
	printf("Char ptr member value of 2nd varialbe = %c\n", *(dptr2.c));
	printf("value of char ptr in 1st variable = %p\n", dptr1.c);		
	printf("value of char ptr in 2nd variable = %p\n", dptr2.c);		
	printf("Changing value of 2nd member in 2nd variable( dptr2 )\n");	
	*(dptr2.c) = 'a';								           
	printf("value of char ptr of 2nd variable = %c and 1st variable = %c\n", *(dptr2.c),*(dptr1.c));
	return 0;
}
