#include <stdio.h>	
#include <conio.h>	
int main()
{	
	char c_var;
	int i_var;
	double d_var;
	char *char_ptr;
	int *int_ptr;
	double *double_ptr;
	char_ptr = &c_var;
	int_ptr = &i_var;
	double_ptr = &d_var;
	printf("Size of char pointer = %d value = %u\n", sizeof(char_ptr), char_ptr);
	printf("Size of integer pointer = %d value = %u\n", sizeof(int_ptr), int_ptr);
	printf("Size of double pointer = %d value = %u\n", sizeof(double_ptr),double_ptr);
	getch();
}
