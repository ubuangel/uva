/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector> 
using namespace std;

bool busqueda(int A[] ,int minimo,int alto,int buscar ){
    int medio;
    
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
    //vector<>ma;
    int MA[5][5];
    int A[20];
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
        
        for (unsigned int t = 0; t < cont; t += 1)
        {
        	cout<<A[t];
        }
        cout<<endl;

    int buscar=19;
    int minimo=0;
    
 int  alto = (sizeof(A) / sizeof(int))-1;
 
 cout<<busqueda(A,minimo,alto,buscar);
 
 
 
 
    
    }
    
   

