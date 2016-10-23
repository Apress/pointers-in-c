int main(int argc, char * argv[])
{
	struct header
	{	
		int version;			
		int signature;		
		//below is structure variable definition and declaration 
		struct tagname										
		{													
			int id;												
			int offset;										
		} tagid;										
	};
	struct header hdrinfo;		
	hdrinfo.version = 0;								
	hdrinfo.signature = 5;								
	hdrinfo.tagid.id = 1; //accessing embedded variables through variable name	
	hdrinfo.tagid.offset = 10; //accessing embedded variables through variable name	
	return 0;										          
}
