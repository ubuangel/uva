/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector> 
using namespace std;

bool busqueda(vector<int> A ,int alto,int buscar ){
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
   // vector<int>ma;
    int MA[5][5];
    vector <int> A;
	int tam,cont=0;
   
        cin>>tam;
        for (unsigned int i = 0; i < tam; i += 1)
        {
        	for (unsigned int j = 0; j < tam; j += 1)
        	{
        		cin>>MA[i][j];
        		
        		A[cont]=MA[i][j];
        		cont++;
        		
        	}
        }
        
     

    int buscar=19;

    
 int  alto = (sizeof(A) / sizeof(int))-1;
 
 cout<<busqueda(A,alto,buscar);
 
 
 
 
    
    }
    
   


