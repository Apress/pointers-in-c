int main() 
{ 		
	int num1 = 10;
	int num2 = 20;
	const int* ptr1 = &num1; 
	int* ptr2;  
	*ptr1 = 20; //can’t change the value what const pointer is pointing
	num1 = 20; //can be done                                 
	ptr1 = &num2; //can’t change the constant pointer’s value (i.e – constant pointer should 
	//not point to any other memory address once initialized 
	printf(“Value stored at pointer = %d\n”,*ptr1);
}