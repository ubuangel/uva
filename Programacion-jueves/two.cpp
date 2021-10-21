/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include<vector> 
#include <algorithm>
using namespace std;

void  sumaobjetivo(vector<int>& A ,int objetivo ){
    int iter1=0;
    int iter2=A.size()-1;
    
    while (iter1<iter2)
    {
    	
    int suma=A[iter1]+A[iter2];
    	
    	if (objetivo<suma)
    	{
    		iter2--;
    	}
    	else if(objetivo>suma){
    		iter1++;
    		
    		}
    		
    	else {
    		
    		break;
    		
    	}
    		
    	
    }
    
  //  cout<<" ["<<iter1+1<<" ,"<<iter2+1<<" ]";
   cout<<iter1+1<<" "<<iter2+1;
    
}

int main()
{
   

    
 
     cout<<"ingresar objetivo :"<<endl;
    
    int objetivo;cin>>objetivo;
     
  
    vector <int> A{2,7,5,1};
   //sort(A.begin(),A.end());


    sumaobjetivo(A,objetivo);

 
 return 0;
 
    
    }
    
    
   


