#include <string.h>	
#include <malloc.h>	
int main(int argc, char* argv[])
{
	char* src = "Hello Pointer";	
	char* dst= NULL;				
	dst = (char*)malloc(sizeof(char) * (strlen(src) + 1));	
	memcpy(dst,src, strlen(src));							
	return 0;
}
