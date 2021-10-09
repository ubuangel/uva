/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector> 
#include <algorithm>


const int maxN = 2e5;

int array[maxN+1];

void actualizar(int a,int b){
	
	array[a]=b;
}
int  sumarango(int a,int b){
	int sum=0;
	for ( int i = a; i <=b; i += 1)
	{
		sum+=array[i];
	}
	return sum;
}

int main(){
	
	int n ,q;
	int n1,n2,n3;
	std::cin>>n>>q;
	
	for (int i = 1; i <=n; i += 1)
	{
		std::cin>>array[i];
	}
	
	for ( int j = 0; j < q; j += 1)
	{
		std::cin>>n1>>n2>>n3;
		
		if (n1==2)
		{
			std::cout<<sumarango(n2,n3)<<std::endl;
		}else{ 
		
			actualizar(n2,n3);}
		
	}
	
	
	return 0;
}
