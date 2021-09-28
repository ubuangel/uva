#include <iostream>
#include <string>
using namespace std;
int main(){
	
	while(true){
		
int num1,num2,num3,num4;
		
	cin>>num1,num2,num3,num4;
int sumatotal=0;
		
	
		if (num1==0 & num2==0 & num3==0 & num4==0)
		
			break;
		
		
		sumatotal+=80;
		
		if (num2>=num1)
		{
			sumatotal+=(num2-num1);
		}else{
			sumatotal+=(40-num1+num2);
			
			
		}
		
		sumatotal+=40;
		if(num3<=num2){
			
			sumatotal+=(num2-num3);
		}else{
			sumatotal+=(40-num3+num2);
		}
		
		if (num4>=num3)
		{
			sumatotal+=(num4-num3);
		}else{
			sumatotal+=(40-num3+num4);
		}
		
		cout<<3240-sumatotal*9<<endl;
		
	}
	return 0;
	
	
}
