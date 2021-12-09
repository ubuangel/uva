// C++14 programa para construir sufijos  tiempo O(nlogn) ;

#include <bits/stdc++.h>
using namespace std;

int main()
{
	string cad = "banana";
	int n = cad.length();
	map<string, int> Map;
	int sufijos[n];

	// mapeando
	// 
	string sub = "";
	for (int i = n - 1; i >= 0; i--) {
		sub = cad[i] + sub;
		Map[sub] = i;
	}

	// ordenando todos los valores en la estructura map
	// en el  array de sufijos
	int j = 0;
	for (auto x : Map) {
		sufijos[j] = x.second;
		j++;
	}

	// imprimieindo el array de prefijos.
	cout << "Array de sufijos para "<<cad<< endl;
	//int i;
	for (int i = 0; i < n; i++) {
		cout << sufijos[i] << " ";
		//cout << endl;
		
		for (unsigned int t = sufijos[i]; t < n; t += 1)
			{
				cout<<cad[t];
			}
			cout<<endl;
		
		
	}

	
	//cout << endl;


}

