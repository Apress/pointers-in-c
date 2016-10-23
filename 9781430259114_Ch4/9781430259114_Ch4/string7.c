#include <stdio.h>
#include <malloc.h>
int main()											                
{													
	char arrstr[6];											
	char* strptr;										
	printf(“Input hello\n”);									
	scanf(“%s”, arrstr);										
	strptr = (char*)malloc(sizeof(char)*10);							
	printf(“Input hello\n”);									
	scanf(“%s”, strptr);									  
}
