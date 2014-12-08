#include <iostream>
#include <stdio.h>

using namespace std;

int inp()
{
  int num = 0;
  char c = getchar_unlocked();
  int flag = 0;
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

void reducto(int& rm,int& gm,int& bm){
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

int maxf(int& a,int& b,int& c){
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
  int t,r,g,b,rm=0,gm=0,bm=0,m,i;
  t=inp();
  while(t--){
    r=inp();
    g=inp();
    b=inp();
    m=inp();
    int ra[r];
    int ga[g];
    int ba[b];
    for(i=0;i<r;i++){
      ra[i]=inp();
      if(ra[i]>rm)
	rm=ra[i];
    }
    for(i=0;i<g;i++){
      ga[i]=inp();
      if(ga[i]>gm)
	gm=ga[i];
    }
    for(i=0;i<b;i++){
      ba[i]=inp();
      if(ba[i]>bm)
	bm=ba[i];
    }
    while(m>0){
      reducto(rm,gm,bm);
      m--;
    }/*
    if(m==2){
      if(!(rm==gm==bm)){
	reducto(rm,gm,bm);
	m--;
      }
    }
    if(m==1){
      if(!((rm==gm && gm>=bm) || (gm==bm && bm>=rm) || (rm==bm && bm>=gm))){
	reducto(rm,gm,bm);
	m--;
      }
      }*/
    printf("%d\n",maxf(rm,gm,bm));
  }
  return 0;
}
