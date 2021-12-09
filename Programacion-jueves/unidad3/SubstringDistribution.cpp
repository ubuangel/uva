


#include<bits/stdc++.h>
using namespace std;
 

#define endl '\n'
 
const int mxN = 1e5+5;
int sa[mxN], pos[mxN], tmp[mxN], lcp[mxN];
int gap, N;
int pre[mxN];
	
 
bool comp(int x, int y) {
    if (pos[x] != pos[y])
        return pos[x] < pos[y];
    x += gap;
    y += gap;
    return (x < N && y < N) ? pos[x] < pos[y] : x > y;
}
 
void sufijo(string s) {
    for (int i = 0; i < N; i++)
        sa[i] = i, pos[i] = s[i];
 
    for (gap = 1;; gap <<= 1) {
        sort(sa, sa+N, comp);
        for (int i = 0; i < N-1; i++)
            tmp[i+1] = tmp[i] + comp(sa[i], sa[i+1]);
        for (int i = 0; i < N; i++)
            pos[sa[i]] = tmp[i];
        if (tmp[N - 1] == N - 1)
            break;
    }
}
 
void build_lcp(string s) {
    for (int i = 0, k = 0; i < N; i++) if (pos[i] != N-1) {
        int j = sa[pos[i] + 1];
        while (s[i + k] == s[j + k])
            k++;
        lcp[pos[i]] = k;
        if (k) k--;
    }
}



int main(){

	
    string s;
    cin>>s;
    N = s.size();
    sufijo(s);
    build_lcp(s);
    int prev = 0;
    for (int i = 0; i < N; i++) {
        pre[prev + 1]++;
        pre[N - sa[i] + 1]--;
        prev = lcp[i];
    }
    for (int i = 1; i <= N; i++) {
        cout << pre[i] << ' ' ;
        pre[i+1] += pre[i];
    }
    
    return 0;
}


