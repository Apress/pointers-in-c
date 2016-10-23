#include <stdio.h>			
#define BIG_ENDIAN 0		
#define LITTLE_ENDIAN 1		
int endian()			
{							
	short int word = 0x0001;
	char *byte = (char *) &word;
	return (byte[0] ? LITTLE_ENDIAN : BIG_ENDIAN); 
}
int main(int argc, char* argv[])
{
	int value;
	value = endian();
	if (value == 1) 
		printf("The machine is Little endian %d\n",value); 
	else									
		printf("The machine is Big Endian %d\n",value); 
	return 0;
}
