#include<iostream>
#include <stdio.h>

#define SIZE 1300000
using namespace std;
int t[SIZE]={0};

int main(void)
{
    int i, j, n;

    t[1]=1;
    for(j=2; 2*j<SIZE; j++)
    {
        t[2*j]=1;
    }
	for(i=3; i<SIZE; i+=2)
	{
	    if(t[i]==0)
        {
            for(j=3; i*j<SIZE; j+=2)
			{
				t[i*j]=1;
			}
        }
	}

	while(cin>>n && n!=0)
    {
        int gap=0;

        for(i=n; t[i]!=0; i--)
        {
            gap++;
        }
        for(i=n; t[i]!=0; i++)
        {
            gap++;
        }

        cout<<gap<<"\n";
    }



    return 0;
}
