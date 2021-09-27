#include <iostream>
#include <string>

int sumadi(int numero){
	int num,sum=0;
	 while(numero != 0) {
        num = numero % 10;
        numero /= 10;
        sum += num;
    }

	
	return sum;
}
int main(){
	int t,n;
	

	while (n!=0)
	{
		std::cin>>n;
		n=abs(n);
			t=sumadi(n);
			if (t<10)
			{
				std::cout<<2;
			}

	}
	return 0;
	
	
	}
