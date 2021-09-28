#include <iostream>
#include <string>
using namespace std;

int main(){
	
	string cadena;

		int n;
		cin>>n;
	for ( int r = 0; r < n; r ++)
	{
		int cont=0;
		int suma=0;
		
		cin>>cadena;
		//cout<<cadena.length();
		int i=0;
		while( i<cadena.length() ){
			
			if(cadena[i]=='O'){
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
