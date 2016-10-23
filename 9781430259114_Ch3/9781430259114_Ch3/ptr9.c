#include <stdio.h>	
#include <malloc.h>	
int *ptr = NULL;	
static int count = 0;
void insert(int data)
{						
	if(ptr == NULL)	
	{				
		ptr = (int*)malloc(sizeof(int)); //allocating space from heap for 1st data	    
		ptr[0] = data; //accessing memory address with array notation to store data    
	}											         
	else											            
	{											         
		ptr = (int*)realloc(ptr, sizeof(int)*(count+1)); //Increasing the size of memory to 
		//accomodate new integer							       
		ptr[count] = data; //accessing memory address with array notation to store data 
	}											       
	count++;										            
}

void show()											             
{													
	int i = 0;											
	for(i = 0; i< count; i++)							
	{														
		printf("%d\n", ptr[i]);									
	}											             
}

int main(int argc, char* argv[])								             
{													
	int c = 0;											
	int data;											
	while( c != 3 )											
	{														
		printf("Insert choice\n");										
		printf("1 to insert data\n");										
		printf("2 to Show data\n");										
		printf("3 to quit data\n");										
		scanf("%d",&c);											
		if( c == 3)													
			break;												
		switch(c)												
		{														
			case 1:														
				printf("Data = \n");											
				scanf("%d",&data);											
				insert(data);									      				
				break;											
			case 2:														
				printf("Data in array\n");										
				show();													
				break;										
		}											
	}												
	return 0;										            
}
