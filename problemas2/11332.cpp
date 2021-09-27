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
	int t,n,cifras=0;
	

	while (n!=0 )
	{
		std::cin>>n;
		n=abs(n);
			t=sumadi(n);
			
			 while(t!=0){             
                   	 t = t/10;         
                   	cifras++;          
            			}
            			
            			if (t==1)
            			{
            				std::cout<<"2";
            			}
            			

	}
	return 0;
	
	
	}
