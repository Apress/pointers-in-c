int main(int argc, char* argv[])
{													
	int data[5][5];											
	int i, j;												
	int count = 0;											
	int (*aptr)[5];											
	int *dataptr;											
	for(i = 0; i<5;i++)										
	{														
		for(j = 0; j<5; j++)											
		{														
			data[i][j] = count++;										
		}											
	}												
	aptr = data;												
	for(i = 0; i <5 ; i++)										
	{														
		printf("Address of %d row = %p\n", i,(*aptr + i));
		dataptr = (*aptr + i*5);										
		for(j = 0; j<5; j++)										
		{														
			printf("%d,%d = %p val = %d \n",i, j, dataptr, *(dataptr));
			dataptr++;											
		}													
		printf("\n");
	}												
	return 0;										             
}
