bool arraysearch(int data)									               
{													
	//some code											
	return true;										              
}												            
bool linkedlistsearch(int data)									               
{													
	//some code											
	return true;										               
}												        

bool binarysearch(int data)									              
{														
	//some code											
	return true;										              
}
bool search( bool (*funcptr)( int ), int data )							                 
{													
	return (*funcptr)(data);									              
}
int main(int argc, char* argv[])									               
{												
	printf("Input Options\n");										
	printf("1 arrsrch\n");									
	printf("2 linkedlistsrch\n");								
	printf("3 binarysrch\n");								
	printf("4 exit\n");										
	int choice = 0;											
	int data;										
	while(choice != 4)										
	{														
		printf("Input\n");											
		scanf("%d", &choice);											
		printf("Data to search\n");										
		scanf("%d", &data);											
		if(choice == 1)												
		{														
			search(arraysearch,data);		//invoking 1st function				
		}													
		else if(choice == 2)											
		{														
			search(linkedlistsearch, data);	//invoking 2nd function				
		}													
		else if(choice == 3)											
		{														
			search(binarysearch, data);		//invoking  3rd function				
		}													
		else if(choice == 4)												
			break;
	}
	return 0;
}
