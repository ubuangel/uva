#include <iostream>
#include<vector> 
#include <algorithm>
#include <iterator>
#include <set>

#define INF 1e18

using namespace std;

typedef long long tipogrande;
int main(){
	int t,a,b;
	cin>>t>>a>>b;
	vector<int> array(t+1);
	for (unsigned int i = 1; i <= t; i += 1)
	{
		cin>>array[i];
	}
	
	for (unsigned int i = 1; i <= t; i += 1)
	{
		array[i]+=array[i-1];
	}
	
	set<pair<tipogrande,int>> derechop;
	    
	for (unsigned int i = a; i <= b; i += 1)
	{
		derechop.insert({array[i],i});
		
		
	}
	tipogrande maximasuma=-INF;
	
	for (unsigned int i = 1; i <= n-a+1; i += 1)
	{
		maximasuma=max(maximasuma,derechop.rbegin()->firts-array[i-1]);
		
		derechop.erase({array[i+a-1],i+a-1});
		
		if (i+b<=n)
		{
			derechop.insert({array[i+b],i+b});
			
		}
		
	}
	cout<<maximasuma;
	
	
	return 0;
	
}
