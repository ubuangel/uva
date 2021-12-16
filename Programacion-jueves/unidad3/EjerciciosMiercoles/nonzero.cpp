#include<iostream>
using namespace std;

//typedef long long ll;
const long long mo=1e9 ;

int main(){
    long long m;
    long long N, M;
    long long respuesta;
   // freopen("input.txt", "r", stdin);
    while(cin>>N>>M){
        respuesta = 1;
        
        while (M--)
        {
        	respuesta *=N--;
        	
        	while(respuesta%10==0)respuesta /=10;
        	respuesta%=mo;
        	
        	
        }
        cout<<respuesta%10<<"\n";
        
    }
    return 0;
}
