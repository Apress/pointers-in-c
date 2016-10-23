int main(int argc, char* argv[])								            
{													
	int data[3][3][3];											
	int i, j, k;												
	int count = 0;												
	for(i = 0; i<3;i++)										
	{														
		for(j = 0; j<3; j++)											
		{														
			for(k = 0; k <3; k++)											
			{														
				data[i][j][k] = count++;									
			}												
		}												
	}												
	printf("0th row of 3d array = %p\n", data);	
	printf("0th row of 2d array = %p\n", data[0][0]);
	printf("0th row of 1d array = %p\n", &data[0][0][0]);					
	return 0;										             
}