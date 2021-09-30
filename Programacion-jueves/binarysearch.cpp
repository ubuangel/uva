/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<vector> 
using namespace std;

bool busqueda(int A[3][3] ,int minimo,int alto,int buscar ){
    int medio;
    
    while(minimo<=alto){
        
        
         medio=(minimo+alto)/2;
        
        if(A[medio]==buscar){
            
            return true;
            
        }else if(A[medio]<valor){
            
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
    
    int A[3][3]={{1,3,5},
                {7,9,11},
                {13,15,17}};
        
    int buscar=11;
    int minimo=0;
    
 int  alto = (sizeof(A) / sizeof(int))-1;
 
 busqueda(A,minimo,alto,buscar);
 
 
 
 
    
    }
    
   


