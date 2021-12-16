#include<stdio.h>
#include<iostream>
using namespace std;

int a[1000000];
int n,i,j,vartemp,m_0,x;
void factorial(int n)
{
    a[0]=1;
       m_0=1;
       vartemp = 0;
       for(i=1;i<=n;i++)
       {
            for(j=0;j<m_0;j++)
            {
               x = a[j]*i+vartemp;
               a[j]=x%10;
               vartemp = x/10;
            }
             while(vartemp>0)
             {
               a[m_0]=vartemp%10;
               vartemp = vartemp/10;
               m_0++;
             }
      }
              for(i=m_0-1;i>=0;i--)
              cout<<a[i];
}
int main()
{
    int numero;
    while(cin>>numero){
        cout<<numero<<"!\n";
        factorial(numero);
        cout<<"\n";
    }
   return 0;
}
