#include <iostream>
#include <string>

int main(){
	
int 	sumatotal=0;
int num1,num2,num3,num4;
cin>>num1,num2,num3,num4;
	while(true){
		if (num1=0&& num2=0 && num3=0 && num4=0)
		{
			break
		}
		
		if (num2>=num1)
		{
			sumatotal+=(num2-num1);
		}else{
			sumatotal+=(40-num1+num2);
			
			
		}
		
		sumatotal+=40;
		if(num3<=num2	){
			
			sumatotal+=(num2-num3);
		}else{
			sumatotal+=(40-num3+num2);
		}
		
		if (num4>=num3)
		{
			sumatotal+=(num4-numc);
		}else{
			sumatotal+=(40-num3+num4);
		}
		
		cout<<3220-sumatotal*9<<endl;
		
	}
	
	
}
