int main(int argc, char* argv[])
{
	FILE* fp;
	int fileoffset = 0;
	char* data = (char*)malloc(sizeof(char)*11);
	int val;
	fp = fopen("c:\\test.txt","r");
	if(fp == NULL)
	{
		printf("File opening error\n");
		return 0;
	}
	else
	{
		printf("File opening success\n");
	}
	if(fgets(data, 10, fp))	
	{							
		printf("%s \n",data);
	}
	else			
	{
		printf("Line reading failure\n");
	}	
	rewind(fp); //resetting the file offset to the beginning of file
	while((val = fgetc(fp)) != EOF)
	{
		if(val != 10) //checking for new line
		{
			printf("%c",(char)val); 
		}
		else
		{
			printf("\n");
		}
	}
	fclose(fp);
	return 0;
}
