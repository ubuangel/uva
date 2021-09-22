
	
	#include <iostream>
#include <string>

using namespace std;

int main(){
    
   string frase;
   string caracter1="``"; 
   string caracter2="''";
   bool bandera=true; 
    while(getline (cin,frase)) {      
    
            
            int i=0;
            while(i<frase.size()){
            	
            	           if(frase[i]=='"'){
                        if(bandera){
                            frase.erase(i,1);
                            frase.insert(i,caracter1);       
                            bandera=false;        
                        }else{
                            frase.erase(i,1);
                            frase.insert(i,caracter2);
                            bandera=true; 
                        }                  
                  }
            	
            	i++;
            }
              cout<<frase<<endl;
   }  
 return 0;   
}
