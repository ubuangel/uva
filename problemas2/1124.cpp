#include <iostream>
#include <string>
#define resolver(x) std::cerr <<x<<"="<<x<<std::endl;
int main(){
	int x;
	while(std::cin>>x && x!=0){
		resolver(x);
	}
	
}
