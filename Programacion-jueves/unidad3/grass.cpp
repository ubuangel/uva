#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#define inf 0x3f3f3f3f
   using namespace std;
  
   struct node
   {
      double l;
      double r;
  } array[10020];
  
  int cmp1(node x,node y)
  {
      if(x.l!=y.l)
          return x.l<y.l;
     else
         return x.r>y.r;
  
  }
  //Ordenar las coordenadas del límite izquierdo de menor array mayor, // Por qué no es necesario ordenar el extremo derecho
  
  int main()
  {
     std::ios::sync_with_stdio(false);
      int n;
      double tam,w;
      double c,rr;
      while(cin>>n>>tam>>w)
      {
          int num=0;
          double maxxr=-1.0;
          for(int i=0; i<n; i++)
          {
             cin>>c>>rr;
              if(rr*2<=w)
             {
                  continue;
              }
              else
              {
                  double l=c-sqrt(rr*rr-w*w/4);
                  double r=c+sqrt(rr*rr-w*w/4);
                //   printf("%lf--%lf\n",l,r);
                  if(r>=maxxr)
                  {
                      maxxr=max(maxxr,r);
                  }
                
                  array[num].l=l;
                  array[num++].r=r;
              }
          }
          sort(array,array+num,cmp1);
          int k=0;
          if(array[0].l>0||maxxr<tam)
          {
              cout<<-1<<endl;
              continue;
          }
          double maxx=0;
          int respuesta=0;
          int flag=0;
          int ww=0;
          while(maxx<tam)
          {
              double uu=maxx;
             for(int i=0; i<num; i++)
              {
                  if(array[i].l<=uu&&array[i].r>maxx)
                  {
                     // minn=array[i].l;
                      maxx=array[i].r;
  //                    zz=i;
                  }
              }
             // printf("%lf----%d\n",maxx,zz);
             if(uu==maxx&&uu<tam)
             {
                 ww=1;break;
             }
              //minn=array[zz].l;
              respuesta++;
             
            
         }
       
         if(ww==0)
             cout<<respuesta<<endl;
         else
             cout<<-1<<endl;
     }
     return 0;
 }
