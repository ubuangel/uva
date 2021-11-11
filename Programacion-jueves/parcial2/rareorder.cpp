/*arbol topologico 


x apaece antes que 
y antes que w
c rare order 

general considerar los string 
general 
cada fila es un palabra ordenada alfabeticamente 
si hay dos  del mismo tamaño luego se va compararndo y si son  difernetes se crea  una  arista de uno al otro luego al final de todo eso se hace un orden topologico 

*/
#include <bits/stdc++.h>

#include <cstdio>
#include <cmath>
#include <climits>
#include <iostream>
#include <string.h>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <string>
#include <algorithm>
#include <bitset>
#include <sstream>
#include <set>
#include <map>
using namespace std;

map<char, vector<char>> adj;
map<char, bool> visitado;
set<char> existe;
vector<string> palabra;

vector<char> orden_topologico;

void dfs(char ind) {

    visitado[ind] = true;
    
    for (auto i : adj[ind]) {
        if (!visitado[i]) {
            dfs(i);
        }
    }
    orden_topologico.push_back(ind);
}

int main() {

    for (int i = 0; i < 26; i++) 
    	visitado[i] = false;

    string arista;
    
    while (cin >> arista, arista.compare("#") != 0) {
        for (auto i : arista) existe.insert(i);
        palabra.push_back(arista);
        if (palabra.size() > 1) {
            for (int i = 0; i < min(palabra.back().length(), palabra[palabra.size() - 2].length()); i++) {
                if (palabra.back()[i] == palabra[palabra.size() - 2][i]) continue;
                adj[palabra.back()[i]].push_back(palabra[palabra.size() - 2][i]);
                break;
            }
        }
    }

    for (auto i : existe) {
        if (!visitado[i]) {
            dfs(i);
        }
    }
    for (int i = 0; i < orden_topologico.size(); i++) {
        cout << orden_topologico[i];
    }
    cout << endl;

}

