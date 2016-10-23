int main(int argc, char* argv[])								           
{													
	int data[5][5]; 											
	int i, j;												
	int count = 0;											
	for(i = 0; i<5;i++)										
	{														
		for(j = 0; j<5; j++)											
		{														
			data[i][j] = count++;									
		}											
	}													
	printf(“Starting address of the array %p\n”, data);	
	for(i = 0; i <5 ; i++)									
	{													
		printf(" %dth row  location = %p\n", i, data[i]);	
		printf(“Loc %d,1 = %p\n”, &data[i][0]);			
	}	
	return 0;
}