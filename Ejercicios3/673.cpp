#include<iostream>
#include<stack>

using namespace std;

int main(){
stack <char> pila;
	
	
	int C;
	int i=0;
	cin>>C;
	while(i<C){
		
		string cadena;
		cin>>cadena;
		
			
			if(cadena[0]=='\0'){
			
				cout<<"Yes";
			}else{
				
				
				bool bandera=true;
				
				for (unsigned int i = 0; i < cadena.size() && bandera;i+=1)
				{
					char caracter =cadena[i];
					
					if (caracter=='(' || caracter=='[')
					{
						pila.push(caracter);
					}else if (caracter==')'&& !pila.empty() && pila.top()=='(')
					{
						pila.pop();
					}else if (caracter==']' && !pila.empty()&& pila.top()=='[')
					
					{
						pila.pop();
					}else bandera=0;
				
				}
				
				if (!pila.empty()){
					
					bandera=0;
					}
				while (!pila.empty())
					pila.pop();
				if (bandera){
					cout<<"Yes"<<endl;
				}
				else {cout<<"No"<<endl;
				}
					
			}
		
		
		
		i++;
	}
	return 0;
}
