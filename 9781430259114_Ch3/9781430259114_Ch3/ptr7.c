int main(int argc, char* argv[])
{								
	int arr[4] = {1,2,3,4};	
	int *iptr; 				
	iptr = &arr[0] + 2; //pointing to second element 
	printf("Address of 2nd index = %p\n", iptr);	
	iptr = &arr[2]; //pointing to 2nd element		
	printf("Address of 2nd index = %p\n", iptr);	
	return 0;
}
