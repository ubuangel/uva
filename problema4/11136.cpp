#include<iostream>
#include<set>
using namespace std;
int main(){
	
	int i=0;
	int dias;
	while(cin>>dias,dias){
		
		set <int>contenedor;
		
		long costo;
		while(i<dias){
			
			int k;	
			cin>>k;
			
			for (unsigned int t = 0; t < k; t += 1)
			{
				int q;
				cin>>q;
				contenedor.insert(q);
			}
			
			set<int>::iterator menor=contenedor.begin();
			set<int>::iterator mayor=--contenedor.end();
			
			
			costo=costo+*mayor-*menor;
			
			contenedor.erase(menor);
			contenedor.erase(mayor);
			
			i++;
		}
		cout<<costo<<'\n';
		
	}
	
}
