#include <iostream>
#include <stdio.h>
#include <cmath>

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

int main(){
  long long t,r,g,b,maxr=-1,maxg=-1,maxb=-1,m,i;
  cin>>t;
  while(t--){
    cin>>r>>g>>b>>m;
    long long ra[r];
    long long ga[g];
    long long ba[b];
    for(i=0;i<r;i++){
      cin>>ra[i];
      if(ra[i]>=maxr)
	maxr=ra[i];
    }
    for(i=0;i<g;i++){
      cin>>ga[i];
      if(ga[i]>=maxg)
	maxg=ga[i];
    }
    for(i=0;i<b;i++){
      cin>>ba[i];
      if(ba[i]>=maxb)
	maxb=ba[i];
    }
    gmin=max(max(maxr,maxg),maxb);
    while(m--)
      {
	if(gmin==maxr)maxr/=2;
	else if(gmin==maxb)maxb/=2;
	else maxg/=2;
	gmin/=2;
	gmin=max(max(maxr,maxg),maxb);
      }

    cout<<gmin<<endl;
  }
  return 0;
}
