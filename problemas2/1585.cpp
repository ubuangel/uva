#include <iostream>
#include <string>
using namespace std;

int main(){
	//int x=1, y=1;
	string cadena;
		int i,cont=0;
		int n,suma=0;
	while( i<n ){
		 getline(cin,cadena);
		if(cadena[i]=='0'){
			cont++;
			suma=suma+cont;
		}
		if(cadena[i]=='X')
		cont=0;
		cout<<suma<<endl;
		
		i++;
				
	}
	return 0;
	
}
