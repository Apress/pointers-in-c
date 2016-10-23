#include "stdio.h"
int  main(int argc, char* argv[])	
{
	char arr[6][10] = {	EGRET",
						"IBIS",
						"MYNA",
						"IORA",
						"MUNIA",
						"BULBUL"
					};											
	int i;												
	for(i = 0; i< 6; i++)									
	{													
		printf(" %d - %s\n", i, arr[i]);								
	}												
	return 0;									              
}
