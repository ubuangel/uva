#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	
	string cadena="cadena";
	vector<int>arreglo(10);
	
	for (unsigned int i = 0; i < cadena.length(); i += 1)
	{
		cout<<i<<":";
		for (unsigned int j = 0; j < i+1; j += 1)
		{
			//cout<<endl;
			cout<<cadena[j];
		}
		
		cout<<endl;
	}

	cout<<" "<<endl;

	return 0;


}
