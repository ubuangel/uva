#include<iostream>
int simbolo(){
	
	swich(){
		
		case '(': return
			case ')': return
			case'+': return 
			case'-': return 
	}
}

int main(){
	
	int i=0;
		char cadena1[],caracter;
		cin>>cadena1>>cadena2;
	while(i<n){
		satack <char> pila;
		int caso,i;
		
		while(cin>>cadena1 && cadena1.size()){
			
			caracter=cadena1[0];
			
			if(caracter==' '){
				break;
				
			}
			if (caracter=='(')
			{
				pila.push(caracter);
			}
			
			else if(caracter=='+'||caracter=='-'||caracter=='*'||caracter=='/'){
				
				while(!pila.empty()$}&& simbolo(caracter)<pila.pop()){
					cout<<pila.top();
					pila.pop();
				}
				pila.push(caracter);
			}
			
			else if(c==')'){
				
				cout<<pila.top();
				pila.pop();
			}
			
		}
	
		
		
		
		
		
		
		i++;
	}
	
}
