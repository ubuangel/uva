#include<iostream>
#include<set>
using namespace std;
int main(){
	

	int dias;
	while(cin>>dias,dias){
		
		multiset <int>contenedor;
		
		long costo=0;
			int i=0;
		while(i<dias){
			
			int k;	
			cin>>k;
			
			for ( unsigned int t = 0; t < k; t += 1)
			{
				int q;
				cin>>q;
				contenedor.insert(q);
			}
			
			multiset<int>::iterator menor=contenedor.begin();
			multiset<int>::iterator mayor=--contenedor.end();
			
			
			costo+=*mayor - *menor;
			
			contenedor.erase(menor);
			contenedor.erase(mayor);
			
			i++;
		}
		cout<<costo<<'\n';
		
	}
	
}
