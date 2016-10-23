#include "stdafx.h"
#include <stdio.h>
#include <string.h>
#include <malloc.h>
int main(int argc, char* argv[])
{
	char* arr[6];
	char tempstring[30];
	int i;
	for(i = 0 ; i< 6;i++)
	{	
		printf("Insert data\n");	
		scanf("%s",tempstring);		
		arr[i] = (char*)malloc(sizeof(char)*(strlen(tempstring) + 1));	
		strcpy(arr[i], tempstring);								
	}											
	printf(“Data in array”);				
	for(i = 0; i< 6; i++)					
	{											
		printf(" %d - %s\n", i, arr[i]);		
	}											
	freestring(arr, 5);							
	return 0;									    
}
freestring(char arr[], int length)
{
	int i;		                        
	for( i = 0; i <= length; i++)
	{
		free(arr[i]);			
	}							
}
