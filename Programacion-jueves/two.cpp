/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include<vector> 
#include <algorithm>
using namespace std;

void  sumaobjetivo(vector<int> A ,int objetivo ){
    int iter1=0;
    int iter2=A.size()-1;
    
    while (iter1<=iter2)
    {
    	
    int suma=A[iter1]+A[iter2];
    	
    	if (objetivo==suma)
    	{
    		cout<<"posicion : {" <<iter1<<" , "<<iter2<<" }"<<endl;
    	}
    	else if(objetivo>suma){
    		iter1++;
    		
    		}
    		
    	else if(objetivo<suma){
    		
    		iter2--;
    		
    	}
    		
    	else{
    		cout<<" no "<<endl;
    		
    	}
    }
    
}

int main()
{
   

    
 
     cout<<"ingresar objetivo :"<<endl;
    
    int objetivo;cin>>objetivo;
     
  
    vector <int> A{1,2,7,9,11,15};

    sumaobjetivo(A,objetivo);

 
 return 0;
 
    
    }
    
    
   


