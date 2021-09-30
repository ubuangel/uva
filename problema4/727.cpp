#include<iostream>
#include<stack>
#include <stdio.h>
#include<cstring>

using namespace std;
int simbolo(char caracter){
	
	switch(caracter){
		
		case '(': return 1;
			
			case'+': return 2; 
			case'-': return 2;
			case'*': return 3;
			case'/': return 3;
	}
}

int main(){
	
	int i=0;
		char cadena1[10],caracter;
		int caso;
		cin>>caso;
	while(i<caso){
		stack <char> pila;
		
		while(cin>>cadena1 && strlen(cadena1)){
			
			caracter=cadena1[0];
			
			if(caracter==' '){
				break;
				
			}
			if (caracter=='(')
			{
				pila.push(caracter);
			}
			
			else if(caracter=='+'||caracter=='-'||caracter=='*'||caracter=='/'){
				
				while(!pila.empty() && simbolo(caracter)<=simbolo(pila.top())){
					cout<<pila.top();
					pila.pop();
				}
				pila.push(caracter);
			}
			
			else if(caracter==')'){
				
				while (pila.top()!='(')
				{
					
				
				cout<<pila.top();
				pila.pop();
				}
			pila.pop();
			}
			
				else{
				
				cout<<caracter;
				}
			
			}
			while(!pila.empty()){
				cout<<pila.top();
				pila.pop();
			}
			
			cout<<"endl";
			
			if (caso)
			{
				cout<<endl;
			}
			
		i++;
		}
	
		
	
}
