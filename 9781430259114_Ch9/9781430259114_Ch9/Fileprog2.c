#include <stdio.h>										          
int main(int argc, char* argv[])								            
{														
	FILE* fp = NULL;										
	int res;												
	fp = fopen("c:\\test.txt","w");									
	if(fp == NULL)												
	{														
		printf("File opening error\n");							
	}												
	else												
	{														
		printf("File opening success\n");							
	}												
	res = fclose(fp);										
	if(res == 0)											
	{														
		printf("File closed\n");									
	}												
	else												
	{														
		printf("Unable to close file\n");					
		
	}												
	return 0;										               
}