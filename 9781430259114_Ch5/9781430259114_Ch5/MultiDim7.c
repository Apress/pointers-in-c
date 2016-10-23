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
	for(i = 0; i <3 ; i++)										
	{														
		for(j = 0; j<3; j++)											
		{														
			for(k = 0; k <3; k++)											
			{														
				printf("%d%d%d= %d ",i,j,k,data[i][j][k]);							
			}													
			printf("\n");											
		}													
		printf("\n");											
	}													
	return 0;										               
}
