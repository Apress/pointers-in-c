// without using pointers
int add(int v1, int v2)
{
	return v1+v2;
}

// using pointers
int add_pointers(int *v1,int *v2)
{
	return *v1+*v2
}

int main(int argc, char* argv[])
{
	int a = 10;
	int b = 20;
	int z = add(10,20);
	printf("without pointers: %d",z);
	
	int s = add_pointer(&a,&b);
	printf("using pointers: %d",s);
	return 0;
}
