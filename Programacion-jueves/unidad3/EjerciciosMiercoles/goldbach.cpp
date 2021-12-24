
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
#define grande 1000000

bool primo(int a){

    for (size_t i = 2; i <a; i++) {
      /* code */
      if (a%i==0) {
        return false;
      }



    }

  }


int main(){
int a;
    while (cin>>a && a!=0 ) {
      /* code */

      if (a>2) {
        if(primo(a)){

          cout<<"primo";
        }else{
            cout<<"no primo";

        }
      }else{

        cout<<"ingrese un numer omayor a 2"<<endl;
      }



    }


}
