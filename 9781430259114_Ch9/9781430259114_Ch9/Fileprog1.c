#include <stdio.h>										          
int main(int argc, char* argv[])								            
{														
	FILE* fp = NULL;											
	fp = fopen("c:\\test.txt","w");									
	if(fp == NULL)												
	{														
		printf("File opening error\n");							
	}												
	else												
	{														
		printf("File opening success\n");							
	}													
	return 0;										               
}