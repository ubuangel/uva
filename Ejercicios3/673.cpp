#include<iostream>
#include<stack>

stack <char> pila;
int main(){
	
	
	int C;
	int i=0;
	cin>>C;
	while(i<n){
		
		string cadena;
		cin>>cadena;
		
		
		
			
			if(cadena[0]='\0'){
			
				cout<<"Yes";
			}else{
				
				
				bool bandera=true;
				
				for (unsigned int i = 0; i < cadena.size() && bool=true;i += 1)
				{
					char caracter =cadena[i];
					
					if (caracter=='(' || caracter=='[')
					{
						pila.push(caracter);
					}else if (caracter==')'&& !pila.empy() && pila.top()=='(')
					{
						pila.pop();
					}else if (pila==']' && !pila.empty()&& pila.top()=='[')
					
					{
						pila.pop();
					}else{
						
						bandera=0;
					}
				}
				
				if (!pila.empty())
				{
					bandera=0;
				}
				
				while (!pila.empty())
					{
					pila.pop();
					}
				
				if (bandera)
					{
					cout<<"Yes"<<endl;
				}else{
					cout<<"No"<<endl;
					}
			}
		
		
		
		
		
		i++;
	}
	return 0;
}
