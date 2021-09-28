#include <iostream>
#include <string>

int sumadi(int t){
	
	int j,sum=0;
	 if (t<10)
	 return t;
	 
	 else{
	 	
	 	
	 	j=0;
	 	while(true){   
	 	
	 		sum+=t%10;          
                   	 t = t/10;    
                   	      
                   	j++;          
            		
            			
            		if (t==0){
            			
            			break;
            			}

            		 }
	return sumadi(sum);
	 }
	
	
}
int main(){
	int n;
	

	while (std::cin>>n && n!=0  )
		{
			
		
		std::cout<<sumadi(n)<<std::endl;
			
			 			

		}
	return 0;
	
	
	}
