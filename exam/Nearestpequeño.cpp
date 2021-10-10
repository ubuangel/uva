#include <iostream>
#include<vector> 
#include <algorithm>
#include<stack>


typedef long long tipogrande; 

using namespace std;

int main(){
	int n;
	cin>>n;
	stack<pair<int,int>> pila;
	vector<int>valores(n);
	
	
	
	for (unsigned int i = 0; i < n; i += 1)
	{
		cin>>valores[i];
	}
	
	for (unsigned int i = 0; i < n; i += 1)
	{
		while(pila.size()>0 && pila.top().first>=valores[i])
			pila.pop();
			
			if (pila.size()>0)
			{
				cout<<pila.top().second<<" ";
			}else{
				
				cout<<0<<" ";
				
			}
			
			pila.push({valores[i],i+1});
			
		
	}
}
