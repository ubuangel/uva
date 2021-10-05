#include <iostream>
#include<vector> 
#include <algorithm>
using namespace std;
//Se le da una matriz de n números enteros y su tarea es encontrar dos valores (en posiciones distintas) cuya suma sea x. 	
void  sumaobjetivo(vector<int> A ,int objetivo ){
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
    		
    	else if(suma==objetivo){
    		
    		 cout<<iter1+1<<" "<<iter2+1;
    		return;//para ciclo infito 0 2 
    		
    		}
    		
    	
    	}
    	
    	
    		
    cout << "IMPOSSIBLE" << endl;
    	
    }
    
    
   
    

int main()
{
   

    
 
 
   int tam,objetivo; cin>>tam>>objetivo;
    
     
 
    vector <int> A;
    int a;
    for ( int i = 0; i < tam; i += 1)
    {
    	cin>>a;
    	A.push_back(a);
    }
    sort(A.begin(),A.end());

    sumaobjetivo(A,objetivo);

 
 return 0;
 
    
    }
    
