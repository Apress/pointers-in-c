int main()
{ 
	int num1 = 10;
	const int* ptr1;
	int* ptr2;
	ptr1 = &num1; 
	*ptr1 = 20; //can’t do this
	num1 = 20; //can be done 
	printf(“Value stored at pointer = %d\n”,*ptr1);
}
