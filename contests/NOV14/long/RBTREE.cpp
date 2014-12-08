#include <bits/stdc++.h>

using namespace std;

bool root=true;

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

long long flevel(long long x){
  long long i=0;
  while(x!=0){
    x=x>>1;
    i++;
  }
  return i;
}

long long fca(long long x,long long y,long long xl,long long yl){
  long long ca,dif,temp,cnt;
  cnt=0;
  dif=abs(xl-yl);
  temp=dif;
  if(xl>=yl)
    while(temp--){
      y=y<<1;
      cnt++;
    }
  else
    while(temp--){
      x=x<<1;
      cnt++;
    }
  ca=x^y;
  int shifts=0;
  while(ca!=0){
    ca=ca>>1;
    shifts++;
  }
  ca=x&y;
  if(shifts>cnt)
  while(shifts--){
    ca=ca>>1;
  }
  else
    while(cnt--){
      ca=ca>>1;
    }
  return ca;
}

void numberr(){
  long long x,y,xl,yl,cl,numnodes,numr;
  x=inp();
  y=inp();
  xl=flevel(x);
  yl=flevel(y);
  cl=flevel(fca(x,y,xl,yl));
  numnodes=xl+yl-cl-cl+1;
  if(root==true){
    if(xl%2==1){
      numr=numnodes/2;
    }
    else
      numr=(numnodes+1)/2;
  }
  else{
    if(xl%2==1){
      numr=(numnodes+1)/2;
    }
    else
      numr=numnodes/2;
  }
  printf("%ld\n",numr);
  return;
}

void numberb(){
  long long x,y,xl,yl,cl,numnodes,numb;
  x=inp();
  y=inp();
  xl=flevel(x);
  yl=flevel(y);
  cl=flevel(fca(x,y,xl,yl));
  numnodes=xl+yl-cl-cl+1;
  if(root==false){
    if(xl%2==1){
      numb=numnodes/2;
    }
    else
      numb=(numnodes+1)/2;
  }
  else{
    if(xl%2==1){
      numb=(numnodes+1)/2;
    }
    else
      numb=(numnodes)/2;
  }
  printf("%ld\n",numb);
  return;
}

int main(){
  long long q;
  char c;
  q=inp();
  while(q--){
    getchar_unlocked();
    c=getchar_unlocked();
    switch(c){
    case 'i':
      getchar_unlocked();
      root=!root;
      break;
    case 'r':
      numberr();
      break;
    case 'b':
      numberb();
      break;
    }
  }
  return 0;
}
