#include <cstdio>
#include<iostream>
#include <algorithm>
#define MAXI 100010
using namespace std;

const int INF = 1e9 + 1;

int planta[4*MAXI],array[MAXI],n;

void constr(int pos,int izq,int der){
	if(izq == der){
		planta[pos] = array[izq];
		return;
	}
	int mid = (izq + der)/2;
	constr(2*pos,izq,mid);
	constr(2*pos+1,mid+1,der);
	planta[pos] = min(planta[2*pos],planta[2*pos+1]);
}
int consulta(int pos,int izq,int der,int i,int j){
	if(izq > der || izq > j || der < i) {
		
		return INF;
		}
	
	if(izq >= i && der <= j){
		return planta[pos];
	}
	int mid = (izq + der)/2;
	return min(consulta(2*pos,izq,mid,i,j),consulta(2*pos+1,mid+1,der,i,j));
}
int main(){
	int TC;
	cin>>TC;
	//scanf("%d",&TC);
	
	int iter=0;
	while(iter<TC){
		int k;
	//	scanf("%d %d",&n,&k);
		cin>>n>>k;
		for(int i=1;i<=n;i++){
			cin>>array[i];
		}
		int resp = 0;
		constr(1,1,n);
		for(int i=1;i<=n;i++){
			int menor = min(consulta(1,1,n,max(1,i - k - 1),max(i-1,1)), consulta(1,1,n,min(i+1,n),min(i+k+1,n)));
			//printf("Menor %d Q1 %d Q2 %d\n",menor,consulta(1,1,n,max(1,i - k - 1),max(i-1,1)),consulta(1,1,n,min(i+1,n),min(i+k+1,n)));
			resp = max(array[i] - menor,resp);
		}
		cout<<resp<<endl;
		
		iter++;
	}
	return 0;
}
