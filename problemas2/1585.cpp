#include <iostream>
#include <string>
using namespace std;

int main(){
	//int x=1, y=1;
	string cadena;
		int cont=0;
		int n,suma=0;
	while( cin>>n ){
		 getline(cin,cadena);
		if(cadena=="x"){
			suma=suma+cont;
			cont++;
		}
		cont=0;
		cout<<suma<<endl;
		
				
	}
	return 0;
	
}
