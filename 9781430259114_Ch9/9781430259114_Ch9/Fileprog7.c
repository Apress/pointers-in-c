int main(int argc, char* argv[])								             
{														
	FILE* fp;											
	int res;											
	int index;											
	char* namefmt = "First Middle Last";				
	fp = fopen("c:\\test.txt","w");						
	if(fp == NULL)										
	{													
		printf("File opening error\n");					
		return 0;										
	}												
	else											
	{												
		printf("File opening success\n");			
	}											
	for( index = 0; index <= strlen(namefmt); index++)			
	{													
		fputc(namefmt[index], fp);						
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