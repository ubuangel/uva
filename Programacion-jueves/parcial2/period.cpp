#include <iostream>
#include<vector> 
#include <algorithm>
	
	
#include<stdio.h>
#include<string.h>
#define MaxL 1000
using namespace std;
int main() {
	int i;
	char s[MaxL];
	cin>>i;
	while(i--) {
		cin>>s;
		int l = strlen(s);
		
		//kmp
		//int t = KMP(s);
		
		int in; 
	int j;
	int P[MaxL];
	P[0] = -1;
	in = 1; 
	j = -1;
	while(s[in]) {
		while(j >= 0 && s[j+1] != s[in])
			j = P[j];
		if(s[j+1] == s[in])
			++j;
		P[in] = j;
		
		 ++in;
	}
	//return j;
		
		
		
		

	
		if(l%(l-j-1))
			cout<<l<<"\n";
		else
			cout<<l-j-1<<"\n";
		if(i)	
			puts("");
	}
    return 0;
}


