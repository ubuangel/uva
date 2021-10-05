#include<iostream>
using namespace std;

//limite https://cses.fi/problemset/result/2949484/#test8
int main(){
	
	int objetivo,n;
	cin>>n>>objetivo;
	int A[n];

for (unsigned int i = 0; i < n; i += 1)
{
	cin>>A[i];
}




	for (unsigned int i = 0; i < n-1; i += 1)
	{
		
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
	cout<<"IMPOSSIBLE"<<endl;

}
