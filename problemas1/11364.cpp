#include <iostream>
#include <algorithm>

int main(){
	
	int i=0;
	int n;
	std::cin>>n;
	int minimo;
	while(i<n){
	int d;
	std::cin>>d;
	int d1=0,d2=100;
	
		for (unsigned int i = 0; i < d; i += 1)
			{
			int x;
			std::cin>>x;
			d1=std::max(d1,x);
			d2=std::min(d2,x);
			}
	
	
	minimo=2*(d1-d2);
	i++;	
	}
	std::cout<<minimo<<std::endl;
	
}
