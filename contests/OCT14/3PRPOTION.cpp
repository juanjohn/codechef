#include <iostream>
#include <stdio.h>
#include <cmath>

using namespace std;

long long gmin;
 
using namespace std;

long long inp()
{
  long long num = 0;
  char c = getchar_unlocked();
  long long flag = 0;
  while(!((c>='0' & c<='9') || c == '-'))
    c=getchar_unlocked();
  if(c == '-')
    {
      flag = 1;
      c=getchar_unlocked();
    }
  while(c>='0' && c<='9')
    {
      num = (num<<1)+(num<<3)+c-'0';
      c=getchar_unlocked();
    }
  if(flag==0)
    return num;
  else
    return -1*num;
}

void reducto(long long& rm,long long& gm,long long& bm){
  if(rm>gm){
    if(rm>bm){
      rm/=2;
    }else{
      bm/=2;
    }
  }else{
    if(gm>bm){
      gm/=2;
    }else{
      bm/=2;
    }
  }
}

long long maxf(long long& a,long long& b,long long& c){
  if(a>b)
    if(a>c)
      return a;
    else
      return c;
  else
    if(b>c)
      return b;
    else
      return c;
}



int main()
{
  int t;
  cin>>t;
  while(t--){
    long long r,g,b,m;
    cin>>r>>g>>b>>m;
    long long red[r];
    long long green[g];
    long long blue[b];
    long long maxr=-1,maxg=-1,maxb=-1;
    for(long long i=0;i<r;i++){
      cin>>red[i];
      if(red[i]>=maxr)maxr=red[i];
    }
    for(long long i=0;i<g;i++){
      cin>>green[i];
      if(green[i]>=maxg)maxg=green[i];
    }
    for(long long i=0;i<b;i++){
      cin>>blue[i];
      if(blue[i]>=maxb)maxb=blue[i];
    }
    gmin=max(max(maxr,maxg),maxb);
    while(m--){
      if(gmin==maxr)maxr/=2;
      else if(gmin==maxb)maxb/=2;
      else maxg/=2;
      gmin/=2;
      gmin=max(max(maxr,maxg),maxb);
    }
    
    cout<<gmin<<endl;
  }
}
