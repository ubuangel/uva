#include <iostream>
#include <string>
#define resolver(x) std::cerr <<#x<<"="<<x<<std::endl;
int main(){
	int x=1;
	
	while( x!=0){
		std::cout<<"x=";std::cin>>x;
		
		resolver(x);
	}
	
}
