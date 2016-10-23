int main(int argc, char* argv[])
{
	FILE* fp;											
	int fileoffset = 0;
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
	fileoffset = ftell(fp);
	printf("File offset at default position %d\n", fileoffset);
	fseek(fp, 6, SEEK_SET);
	fileoffset = ftell(fp);
	printf("File offset after seeking %d\n", fileoffset);
	
	fclose(fp);
	return 0;
}
