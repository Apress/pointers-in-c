int main(int argc, char* argv[])								             
{													
	int arr[4] = {1,2,3,4};										
	int (* ptr2arr)[4];										
	int i;												
	int *ptr = arr;											
	ptr2arr = &arr;											
	for(i = 0; i<4; i++)										
	{										
		printf("address of array = %p\n", arr + i);
	}											
	printf("Value at = %d\n",*(ptr2arr[0] + 1));
	for(i = 0; i<4; i++)										
	{												
		printf("Value at %p = %d\n",(ptr2arr[0] + i),*(ptr2arr[0] + i));
	}												
	return 0;										
}