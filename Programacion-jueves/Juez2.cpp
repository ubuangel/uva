#include<iostream>
using namespace std;
int main(){
	
	int objetivo,n;
	cin>>n>>objetivo;
	int

for (unsigned int i = 0; i < n; i += 1)
{
	cin>>A[i];
}




	for (unsigned int i = 0; i < n-1; i += 1)
	{
		int suma;
		for (unsigned int j = i+1; j < n; j += 1)
		{
			
			if (A[i]+A[j]==objetivo)
			{
				cout<<i+1<<" "<<j+1<<endl;
				suma=A[i]+A[j];
				return 0 ;
				
			}
			
				
			
		}
		
		
		
		
		
		
	}
	cout<<"IMposible"<<endl;

}
