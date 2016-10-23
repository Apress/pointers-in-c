#include <stdio.h>									                
#include <malloc.h>									             
#define BUFFER 5										           
int main(int argc, char* argv[])								             
{													
	FILE* fp;											
	int res;										
	char*str = NULL;									
	fp = fopen("c:\\test.txt","r");						
	if(fp == NULL)									
	{												
		printf("File opening error\n");				
	}											
	else											
	{												
		printf("File opening success\n");			
	}											
	str = (char*)malloc(sizeof(char)*BUFFER);		
	res = fread(str, sizeof(char), BUFFER-1, fp);	
	str[4] = '\0';									
	if(res)										
	{											
		printf("%s \n",str);					
	}
	else										
	{											
		printf("Line reading failure\n");		
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