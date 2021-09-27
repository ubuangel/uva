#include <iostream>
#include <string>

int main(){	int  numero,n;
	std::cin>>numero;
	for (unsigned int i = 0; i < numero; i += 1)
	{
		std::cin>>n;
		n=(((n*567)/9)+7492);
//		n=n/9;
//		std::cout<<n;
//		n=n+7492;
		n=n*235;
		n=n/47;
		n=n-498;
		
		//centesima digito
		n=n/10;
		n=n % 10;
//		n=abs(n);
//std::cout<<std::endl	;
	std::cout<<n;
	}

	
}
