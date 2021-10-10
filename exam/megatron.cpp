#include <iostream>
#include<vector> 
#include <algorithm>

int main(){
	cin>>n;
	int A[n];
	int t,n,m,iter=0;
	cin>>t;
	vector<int>datos;
	int j,tam=0,m_suma=0 ,m_tam=0;
	while (iter<t)
	{
		cin>>n>>m;
		tam=0;s=0;m_suma=0 ,m_tam=0;j=0;
		
		
		for (unsigned int i = 0; i < n; i += 1)
		{
			cin>>datos[i];
		
			
			
		}
		
		for (unsigned int i = 0; i < n; i += 1)
		{
			s+=datos[i];
			tam++;
			
			if (s<=m && tam>m_tam )
			{
				m_sum=s;
				m_tam=tam;
			}else if(tam==m_tam && m_sum>s){
				
				m_lem=lem;
				m_sum=s;
			}
			while (s>m)
			{
				s-=dato[j];
				j++;
				tam--;
			}
			
			
			if (s<=m && tam>m_tam)
			
			{
				m_sum=s;
				m_tam=tam;
			}else if(tam=m_tam && m_sum>s){
				m_tam=tam;
				m_sum=s;
				
			}
			
		}
		cout<<m_sum<<" "<<m_tam<<endl;
		
		
		
		iter++;
	}
	return 0;
}
