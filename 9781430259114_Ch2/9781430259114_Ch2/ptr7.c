int main()   
{ 		   
	int num1 = 10; 
	int num2 = 20;
	int* const ptr1 = &num1;  //Initialization of const ptr
	ptr1 = &num2; // can’t do this 
	printf(“Value stored at pointer = %d\n”,*ptr1);	
}
