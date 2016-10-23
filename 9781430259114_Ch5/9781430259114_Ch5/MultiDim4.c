int main(int argc, char* argv[])				
{
	int data[5][5];												
	int i, j;												
	int count = 0;											
	int (*aptr)[5];											
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
		printf("%dth row = %p\n",i, *aptr++);				
	}		
	return 0;										                    
}