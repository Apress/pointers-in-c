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
	for(i = 0; i<3;i++)											
	{														
		for(j = 0; j<3; j++)											
		{														
			for(k = 0; k <3; k++)											
			{														
				printf("%d%d%d=%d addr %p ", i,j,k, data[i][j][k],&data[i][j][k]);
			}													
			printf("\n");											
		}													
		printf("\n");										
	}												
	printf(“Index value address\n”);	
	for(i = 0; i<3; i++)										
	{														
		printf("row %d addr = %p\n",i, data+i);		
	}													
	return 0;										             
}