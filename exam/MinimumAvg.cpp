#include <iostream>
#include<vector> 
#include<algorithm>
#include<climits>
#include <set>
#define ln '\n'
#define INF 1e18
using namespace std;
int mini(int x,int y){
	
	
	
	if (x>y) {
		return (y);
	}  else  {
		return (x);
	}
}

int main(){
	int mini=0;
	int max=INT_MAX;
	int n,a;
	cin>>n;
	vector<int>A;
	
	for (unsigned int i = 0; i < n; i += 1)
	{
		cin>>a;
		
		A.push_back(a);
	}
	for (unsigned int i = 0; i < A.size()-2; i += 1)
	{
		float v1=(float)((A[i]+A[i+1]+A[i+2])/3);
		float v2=(float)((A[i]+A[i+1])/2);
		
		if (max>v1 || max>v2)
		{
			max=min(v1,v2);
			mini=i;
		}
	}
	if (max>(A[A.size()-1]+A[A.size()-2])/2)
	
	{
		return (A.size()-2);
	}
	
	return mini;
}
