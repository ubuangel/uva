/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector> 
#include <algorithm>
using namespace std;
void actualizar(int array[],int a,int b){
	
	array[a]=b;
}
int  sumarango(int array[],int a,int b){
	int sum=0;
	for (unsigned int i = a; i <=b; i += 1)
	{
		sum+=array[i];
	}
	return sum;
}

int main(){
	
	int n ,q;
	int n1,n2,n3;
	cin>>n>>q;
	int array[n];
	for (unsigned int i = 1; i <=n; i += 1)
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
	
	
	return 0;
}
