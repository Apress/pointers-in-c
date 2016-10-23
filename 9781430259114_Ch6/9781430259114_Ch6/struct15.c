int main()
{
	struct signature								       
	{													
		char sign;										
		char version;								
	};				
	struct id		
	{					
		char id;			
		char platform;		
	};						
	struct data				
	{						
		struct signature sig;	
		struct id idv;			
		char data[100];
	};						
	struct data* img;		
	recievedata(img);		
	struct signature* sign = extractsignature( &img);	
	struct id* idval = extractid( &img);				
}
struct signature* extractsignature(struct data* d)		
{													
	struct signature* sig = (struct signature*)d;	
	return sig;
}
struct id* extracted( struct data* d)	
{										
	struct id* idv = (struct id*)d;		
	return idv;								
}
