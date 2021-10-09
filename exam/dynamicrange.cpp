#include <iostream>
#include<vector> 
#include <algorithm>
using namespace std;
void actualizar(int array[],int a,int b){
	
	array[a]=b;
}
void sumarango(int array[],int a,int b){
	int sum=0;
	for (unsigned int i = a; i < b; i += 1)
	{
		sum+=array[i];
	}
	return sum;
}

int main(){
	int n ,q;
	int n1,n2,n3;
	cin>>n>>q
	for (unsigned int i = 0; i < n; i += 1)
	{
		cin>>array[i];
	}
	
	for (unsigned int j = 0; j < q; j += 1)
	{
		cin>>n1>>n2>>n3;
		
		if (n1==1)
		{
			actualizar(array,n2,n3);
		}
		
		cout<<sumarango(array,n2,n3)<<endl;
	}
	
	
	return type 2
}
