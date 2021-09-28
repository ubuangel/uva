#include <iostream>
#include <string>
#define resolver(y) std::cerr <<#y<<"="<<y<<std::endl;
int main(){
	int x=1, y=1;
	
	while( x!=0 && y!=0){
		std::cout<<"y=";std::cin>>y;
		std::cout<<"x=";std::cin>>x;
		
				
		resolver(x);
	}
	
}
