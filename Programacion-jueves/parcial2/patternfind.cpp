#include <iostream>
#include<vector> 
#include <algorithm>

using namespace std;



int main(){
	int i;
	cin>>i;
	
	string cad="nuevo de nuevo";
	while (--i)
	{
		
		int sum=0;
		for (unsigned int i = 0; i < cad.length(); i += 1)
		{
			sum=sum+int(cad[i]);
			
			cout<<sum % 3;
		}
		
		
		
	}

	cout<<" "<<endl;

}
