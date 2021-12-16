#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>

using namespace std;

int main(){
	int a,b,c;
	int  A,B,C;
	while (cin>>a>>b>>c && (a,b,c)!=0)
	{
		 
	    A = (b*b+c*c-a*a);
	    B = (a*a+c*c-b*b);
	    C = (a*a+b*b-c*c);
	    if(A == 0 || B == 0 || C == 0)
	   
		cout << "right"<<"\n";
	    else
	    	cout<<"wrong"<<"\n";
	}

	

	return 0;


}


