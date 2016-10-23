int main()                 		
{
    int num = 10;
	int* const ptr1 = &num;  //Initialization of const ptr   
	printf(“Value stored at pointer = %d\n”,*ptr1);
}