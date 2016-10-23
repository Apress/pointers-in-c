int main(int argc, char* argv[]) 
{
   	int i = 0;       
	int data = 9;
	int *iptr;	
	char *cptr;
	iptr = &data;	
	cptr = (char*)&data;
	printf("value of data = %d hex value = %x\n", data, data);
	printf("Address of data = %p\n", &data);
	printf("Integer pointer pointing at %p\n", iptr);
	printf("Character pointer pointing at %p\n", cptr);		
	printf("Printing address of all the four bytes of variable int data\n");
	for(i = 0;i<4;i++)										
	{											
		printf("address = %p value = %x\n",cptr, *cptr);
		cptr++;											
	}												
	return 0;												
}