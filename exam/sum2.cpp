#include <iostream>
#include<vector> 


#include <set>
#define ln '\n'
#define INF 1e18

using namespace std;

typedef long long tipogrande;

int main(){
	int t,a,b;
	cin>>t>>a>>b;
	vector<tipogrande> array(t+1);
	for (int i = 1; i <= t; i += 1)
	{
		cin>>array[i];
	}
	
	for ( int i = 1; i <= t; i += 1)
	{
		array[i]+=array[i-1];
	}
	
	set<pair<tipogrande,int>> derechop;
	    
	for ( int i = a; i <= b; i += 1)
	{
		derechop.insert({array[i],i});
		
		
	}
	tipogrande maximasuma=-INF;
	
	for (int i = 1; i <= t-a+1; i += 1)
	{
		maximasuma=max(maximasuma,derechop.rbegin()->first-array[i-1]);
		
		derechop.erase({array[i+a-1],i+a-1});
		
		if (i+b<=t)
		{
			derechop.insert({array[i+b],i+b});
			
		}
		
	}
	cout<<maximasuma;
	
	
	return 0;
	
}
