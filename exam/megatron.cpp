#include <iostream>
#include<vector> 
#include <algorithm>
using namespace std;
int main(){
	
	int t,n,m,iter=0;
	cin>>t;


	
	
	
	vector<int>datos(10000005);
	int j,s=0,m_sum=0 ,tam=0,m_tam=0;
	while (iter<t)
	{
		cin>>n>>m;
		tam=0;s=0;m_sum=0 ,m_tam=0;j=0;
		
		
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
				
				m_tam=tam;
				m_sum=s;
			}
			while (s>m)
			{
				s-=datos[j];
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
