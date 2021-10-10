
#include <iostream>
#include<vector> 
#include <algorithm>
using namespace std;




int B = 3;

const int li = 1e9+7;


const int tam = 1e6+6;
int arreglo[tam];

struct {
    int bit[tam] = {0};

    void update(int k, int x) {
        x %= li;
        if (x < li) x += li;
        for (; k < tam; k += k&-k) {
            (bit[k] += x) %= li;
        }
    }

    int consulta(int k) {
        int s = 0;
        for (; k > 0; k -= k&-k)
            (s += bit[k]) %= li;
        return s;
    }
} pre, suf;



int main(){
    
    int n, t; cin>>n>>t;
    string s; cin>>s;
    arreglo[0] = 1;
    for (int i = 1; i < tam; i++) 
        arreglo[i] = arreglo[i-1] * B % li;

    for (int i = 0; i < n; i++) {
        pre.update(i+1, (s[i]-'a'+1) * arreglo[i]);
        suf.update(i+1, (s[i]-'a'+1) * arreglo[n-i-1]);
    }
    
    while (t--) {
        int ch; cin>>ch;
        if (ch == 1) {
            int k; char x;
            cin>>k>>x; k--;
            pre.update(k+1, -(s[k]-'a'+1) * arreglo[k]);
            pre.update(k+1, (x-'a'+1) * arreglo[k]);
            suf.update(k+1, -(s[k]-'a'+1) * arreglo[n-k-1]);
            suf.update(k+1, (x-'a'+1) * arreglo[n-k-1]);
            s[k] = x;
        }
        else {
            int x, y; cin>>x>>y;
            int h1 = (pre.consulta((x+y)/2) - pre.consulta(x-1) + li) % li;
            int m1 = arreglo[x-1];
            int h2 = (suf.consulta(y) - suf.consulta((x+y-1)/2) + li) % li;
            int m2 = arreglo[n-y];
            cout << (h1 * m2 % li == h2 * m1 % li ? "YES" : "NO" ) << endl;            
        }
    }
}
