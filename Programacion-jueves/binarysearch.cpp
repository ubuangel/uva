/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include<vector> 
#include <algorithm>
using namespace std;

bool busqueda(vector<int>& A ,int alto,int buscar ){
    int medio;
    int minimo=0;
    while(minimo<=alto){
        
        
         medio=(minimo+alto)/2;
        
        if(A[medio]==buscar){
            
            return true;
            
        }else if(A[medio]<buscar){
            
            minimo=medio+1;
        }else{
            
            alto=medio-1;
             }
        
        
        }
        
     if(minimo>alto){
            
            return false;
        }
}

int main()
{
   

    
    cout<<"ingresar el largo y el ancho de la matriz :"<<endl;
    int ilargo;cin>>ilargo;
    int jancho;cin>>jancho;
    
     cout<<"ingresar numero a buscar :"<<endl;
     int buscar;cin>>buscar;
    
     cout<<"ingresar numeros de la matriz :"<<endl;
    vector<vector<int> >MA(ilargo,vector<int>(jancho));
    vector <int> A;
	
        
        
        
        
        for ( int i = 0; i < ilargo; i += 1)
        {
        	for ( int j = 0; j < jancho; j += 1)
        	{
        		cin>>MA[i][j];
        		
        		A.push_back(MA[i][j]);
        		//A[cont]=MA[i][j];
        		
        		
        	}
        }
        
     
sort(A.begin(),A.end());



 int  alto = (sizeof(A) / sizeof(int))-1;
 
 if(busqueda(A,alto,buscar)){
 	cout<<"True";
 }else{ cout<<"False";}
 
 
 
 return 0;
 
    
    }
    
    
   


