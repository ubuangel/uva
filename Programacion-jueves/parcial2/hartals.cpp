#include <cstdio>
#include <cmath>
#include <climits>
#include <iostream>
#include <string.h>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <bitset>
#include <sstream>
#include <set>
#include <map>
using namespace std;



#define MAX 3651
int main()
{

    bool hartal[MAX];
    int prueba,partidos,dias,h,hartalNo;
 
    cin>>prueba;
    while(prueba--){
      
        cin>>dias>>partidos;
      
        for(int i=1 ; i<=dias ; i++ )
        	hartal[i] = false;
        
        
        for(int i=1 ; i<=partidos ; i++ ){
        	//scanf("%d", &h);
        	cin>>h;
            for(int j=h;j<=dias; j +=h)hartal[j] = true;
        	
        }
       
        for(int i = 6;i<=dias; i+=7)
        	hartal[i] = false;
        for(int i = 7;i<=dias; i+=7)
        	hartal[i] = false;
        hartalNo=0;
        for(int i=1 ; i<=dias ; i++ )
        	if(hartal[i]) hartalNo++;
        
        cout<<hartalNo<<"\n";
        //printf("%d\n", hartalNo);
    }
    return 0;
}
