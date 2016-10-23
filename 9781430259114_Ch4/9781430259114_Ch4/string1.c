#include <string.h>
int main(int argc, char* argv[])	
{
	char* str = "Hello Pointer";
	int i = 0;
	for( i = 0; i< strlen(str); i++)
	{
		printf("%c",str[i]);
	}
	return 0;
}