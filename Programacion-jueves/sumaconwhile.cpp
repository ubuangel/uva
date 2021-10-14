#include<iostream>
using namespace std;
//otramanera recursiva
int j;
	int sumaresto(int A[],int i){
		
		
		j=i+1;
		int suma;
			 suma=A[i]+A[j];
		
		return suma;
		
	}
int main(){
	
	int objetivo,n;
	cin>>n>>objetivo;
	int A[n];

for (unsigned int i = 0; i < n; i += 1)
{
	cin>>A[i];
}
	int i;



			for (unsigned int i = 0; i < n-1; i += 1)
			{
				
				if (sumaresto(A,i)==objetivo)
				{
					cout<<i+1<<" "<<j+1;
					return 0;
				}
				
				
		
				
			}
			
			cout<<"IMPOSSIBLE";
			
				
			
}
