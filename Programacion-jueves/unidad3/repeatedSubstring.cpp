


	
	/*
	 * 
	 * Matriz de sufijo

Sin una array saArray y una array de altura, y luego se recorre desde i = 2 ~ n, cada vez que ans + = max (0, heigt [i] -lastheight);

Lo que se resta aquí es el número de subcadenas que se han calculado. con el  array de sufijos de número de  subcadena distinta

	 * 
	 */


#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
using namespace std;
//variables globales
const int maxn = 1e5 + 8;
int saArray[maxn];
int altura[maxn];
int _rank[maxn], t1[maxn], t2[maxn], c[maxn];
string s;
 void get_sa(const int &n, int m)
{
    int i, k, *x = t1, *y = t2, p, j;
    for(i = 0; i < m; i++) c[i] = 0;
    for(i = 0; i < n; i++) ++ c[x[i] = s[i]];
    for(i = 1; i < m; i++) c[i] += c[i - 1];
    for(i = n - 1; i >= 0; i--) saArray[-- c[x[i]]] = i;
    for(k = 1; k <= n; k <<= 1){
        p = 0;
        for(i = n - k; i < n; i++) 
        	y[p ++] = i;
        for(i = 0; i < n; i++) 
        	if(saArray[i] >= k) 
        		y[p ++] = saArray[i] - k;
        for(i = 0; i < m; i++) 
        	c[i] = 0;
        for(i = 0; i < n; i++) 
        	++ c[x[y[i]]];
        for(i = 1; i < m; i++) 
        	c[i] += c[i - 1];
        for(i = n - 1; i >= 0; i--) 
        	saArray[--c[x[y[i]]]] = y[i];
        swap(x, y), p = 1, x[saArray[0]] = 0;
        for(i = 1; i < n; i++)
            x[saArray[i]] = (y[saArray[i-1]] == y[saArray[i]] && y[saArray[i-1]+k] == y[saArray[i]+k]) ? p - 1 : p ++;
        if(p >= n) break;
        m = p;
    }
    k = 0;
    for(i = 0; i < n; i++) _rank[saArray[i]] = i;
    for(i = 0; i < n; i++){
        if(k) --k; if(!_rank[i]) continue;
        j = saArray[_rank[i] - 1];
        while(s[i + k] == s[j + k]) k++;
        altura[_rank[i]] = k;
    }
}

 void print(const int &n)
{
    for(int i = 1; i <= n; i++){//saArray y la altura se basa en 1 ~ n 
  
        for(int j = saArray[i]; j < n; j++){//el contexto esta basado en 0~n-1 
            cout << s[j];
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
  


    int T, n, sz, i, o, ans;
    cin >> T;
    while(T--){
        cin >> s;
        sz = s.size();
        n = sz;
        get_sa(n+1, 256);
       //print(n);
        ans = o = 0;
        for(i = 2; i <= n; i++){
            ans += max(0, altura[i] - o); o =altura[i];
           
        }
        cout << ans << "\n";
    }
    return 0;
}
