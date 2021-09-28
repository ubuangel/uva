#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string cadena;
		int i=0;
		int n;
		cin>>n;
	for (unsigned int r = 0; r < n; r += 1)
	{
		int cont=0;
		int suma=0;
		getline(cin,cadena);
		
		while( i<cadena.size() ){
			if(cadena[i]=='0'){
				cont++;
				suma=suma+cont;
				}
			if(cadena[i]=='X'){
				
				cont=0;
			}
		//cont=0;
		
		i++;
				
		}
		cout<<suma<<endl;
		
	}	
		
	
	return 0;
	
}
