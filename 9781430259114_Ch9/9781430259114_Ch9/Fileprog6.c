int main(int argc, char* argv[])								             
{														
	FILE* fp;										
	int res;											
	int index;									
	char* name = NULL;						
	char* country = NULL;					
	fp = fopen("c:\\test.txt","r");			
	if(fp == NULL)						
	{									
		printf("File opening error\n");			
	}												
	else										
	{											
		printf("File opening success\n");			
	}											
	name = (char*)malloc(sizeof(char)*BUFFER);		
	country = (char*)malloc(sizeof(char)*BUFFER);	
	while (!feof(fp))								
	{											
		fscanf(fp, "%d %s %s", &index, name, country);			
		printf("%d %s %s\n", index, name, country);				
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