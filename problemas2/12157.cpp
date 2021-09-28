#include<cmath>
#include<iostream>

using namespace std;

int main()
{
	int Tarifa, cont = 1;
	cin >> Tarifa;
	
	int i=0;
	while(i<Tarifa){
		
		int mileCosto=0,jugoCosto=0,N;
		cin>>N;
		
		while(N--){
			int tmp;
			cin>>tmp;
			mileCosto+=(1+(int )floor(tmp/30.0))*10;
						jugoCosto+=(1+(int )floor(tmp/60.0))*15;
			
			
		}
		
		cout<<"Case "<<cont++<<": ";
		if (mileCosto<jugoCosto)
		{
			cout<<"Mile "<<mileCosto<<endl;
		}else if(mileCosto>jugoCosto){
			cout<<"Juice "<<jugoCosto<<endl;
		}else{
			
			cout << "Mile Juice " << mileCosto<< endl;
		}
		
		i++;
		
		
	}
	return 0;
	
}
