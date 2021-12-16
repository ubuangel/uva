#include<bits/stdc++.h>

using namespace std;
unsigned long int fact(unsigned long int n)
{
    if(n==0) return 1;
    return n*fact(n-1);
}
 
int main()
{
    char cadena[24];
    int tn;
    int tc=1;
    cin>>tn;
    while(tn--) {
            cin>> cadena;
        unsigned long int len=strlen(cadena);
        unsigned long int ans=fact(len), c=0, d;
        for(int i=0; i<len-1; i++) {
            c=1;
            if(cadena[i]!='1')
            for(int j=i+1; j<len; j++)
               if(cadena[i]==cadena[j]) {
                   c++;
                   cadena[j]='1';
               }
            if(c>1)ans=ans/fact(c);
        }
       
        cout<<"Data set "<<tc++<<": "<<ans<<"\n";
    }
    return 0;
}
