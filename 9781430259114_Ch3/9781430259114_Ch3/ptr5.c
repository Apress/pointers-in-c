int main(int argc, char* argv[])
{								
	int data[4] = {1,2,3,4};	
	int *iptr1;					
	int *iptr2;				
	iptr1 = &data[0];		
	iptr2 = &data[1];	
	if(iptr1 == iptr2)	
		printf("Address of iptr1 is equal to address of iptr2\n);	
	if(iptr1 > iptr2)						
		printf("Address of iptr1 is greater than address of iptr2\n”);	
	else														
		printf("Address of iptr1 is smaller than address of iptr2\n");		
	return 0;
}
