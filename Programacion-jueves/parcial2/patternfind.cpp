#include <iostream>
#include<vector> 
#include <algorithm>

using namespace std;



int main(){
	
	int i;
	cin>>i;
	while(i--){
		
		
		
		
		
	string str1 ;
	cin>>str1;
	   string str2 ;
	   cin>>str2;
	   
	   
	   
	   
	   int pos = 0;
	   int index;
	   while((index = str1.find(str2, pos)) != string::npos) {
      cout << "encontrado en la posicion: " << index << endl;
      pos = index + 1; //new position is from next element of index
  		 }
		
	}
	
	
}
