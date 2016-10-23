int main(int argc, char* argv[])								             
{													
	FILE* fp;											
	int res;											
	int index;										
	int numofdatatowrite;							
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
	numofdatatowrite = 5;					
	if(numofdatatowrite == fwrite(namefmt, sizeof(char), numofdatatowrite, fp))	
	{														
		printf("Success in writing data\n");			
	}												
	else											
		printf("Unsuccess in writing data\n");		
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