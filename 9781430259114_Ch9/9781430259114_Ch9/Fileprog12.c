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
	fseek(fp, 0, SEEK_END);
	fileoffset = ftell(fp);
	printf("Size of file in bytes %d\n", fileoffset);
	fclose(fp);
	return 0;
}
