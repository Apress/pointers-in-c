#include <stdio.h>
#include <malloc.h>
int main()
{														
	char arrstr[6];												
	char* strptr;											
	printf(“Input hello\n”);								
	scanf(“%s”, arrstr);											
	strptr = arrstr;										
	while(*strptr != ‘\0’)										
	{														
		printf(“%c”,*strptr);											
		strptr++;										
	} 
}
