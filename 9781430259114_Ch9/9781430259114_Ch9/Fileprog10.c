int main(int argc, char* argv[])								              
{													
	FILE* fp;											
	int res;												
	int index;											
	char* datafromfile = (char*)malloc(sizeof(char)*6);		
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
	fputs("HELLO NAV", fp);					
	fclose(fp);							
	fp = fopen("c:\\test.txt","r");		
	//Read the current content			
	fgets(datafromfile, 10, fp);		
	printf("Current content of file %s\n", datafromfile);		
	rewind(fp);		//resetting the file pointer                 
	fseek(fp, 6, SEEK_SET);	//seeks file pointer to offset value 6 from beginning of file	
	memset(datafromfile, 0, sizeof(char));						
	fgets(datafromfile, 6, fp); //					
	printf("Content of data %s\n", datafromfile);		
	fseek(fp, 0L, SEEK_SET); seeks file pointer to offset value 0 from beginning of file	
	memset(datafromfile, 0, sizeof(char));					
	fgets(datafromfile, 6, fp);							
	printf("Content of data %s\n", datafromfile);		
	fclose(fp);												
	return 0;
}