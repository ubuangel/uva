#include<iostream>


int main(){
	int n,x,y;
	std::cin>>n;
	for (unsigned int i = 0; i < n; i += 1)
	{
		std::cin>>x>>y;
		
		if (x<y)
		{
			std::cout<<"<";
		}else if(x>y){
			
			std::cout<<">";
		}else{
			
			std::cout<<"=";
		}
			
			std::cout << std::endl;
		
	}
	return 0;	
	
}
