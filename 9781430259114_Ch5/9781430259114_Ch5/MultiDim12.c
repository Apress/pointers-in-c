#include <stdio.h>
int main(int argc, char* argv[])
{													
	int data[3][3][3];										
	int i, j, k;											
	int count = 0;											
	int *dataptr = NULL;										
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
	for(i = 0; i<3; i++)										
	{														
		printf("3D %d ROW\n", i);										
		for(j = 0; j<3; j++)											
		{														
			printf("2D %d row\n", j);										
			dataptr = *(data[i]+j);											
			for(k = 0; k<3; k++)											
			{														
				printf("%d%d%d = %p val = %d ",i,j,k, dataptr, *dataptr++);					
			}													
			printf("\n");											
		}											
	}													
	return 0;										                   
}
