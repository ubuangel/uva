/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include<vector> 
#include <algorithm>
using namespace std;

bool sumaobjetivo(vector<int> A ,int objetivo ){
    int medio;
    while (iter1<=iter2)
    {
    	
    	suma=A[iter1]+A[iter2];
    	
    	if (objetivo==suma)
    	{
    		cout<iter1<<iter2;
    	}
    	else if(objetivo>suma){
    		iterador++;
    		
    		}
    		
    	else{
    		
    		iter2--;
    	}
    }
    
}

int main()
{
   

    
 
     cout<<"ingresar numero a buscar :"<<endl;
     int buscar;cin>>buscar;
    
     
  
    vector <int> A{1,2,7,9,11,15};
 	int objetivo=11;
    sumaobjetivo(A,objetivo);

 
 return 0;
 
    
    }
    
    
   


