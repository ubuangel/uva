
#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;


int main(){
	char cadena[10000];
	bool once;
	while(cin>>cadena){
		if(strcmp(cadena,"0")==0)
			break;
		int i;
		int len=strlen(cadena);
		int once_count,odd_count;
		for(i=len-1,once=true,once_count=odd_count=0;i>=0;i--,once=!once)
			if(once)
				once_count+=cadena[i]-'0';
			else
				odd_count+=cadena[i]-'0';
		if((once_count-odd_count)%11==0)
			cout<<cadena<<"is a multiple of 11" <<"\n";
		else
			cout<<cadena<<" is not a multiple of 11"<<"\n";
	}
	return 0;
}
