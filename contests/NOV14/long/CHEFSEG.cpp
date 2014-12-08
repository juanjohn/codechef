#include <bits/stdc++.h>

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

int main(){
  long long t,x,k,l,k_tmp;
  long double pnt;
  t=inp();//scanf("%ld",&t);
  while(t--){
    l=1;
    x=inp();
    k=inp();//scanf("%ld%ld",&x,&k);
    k_tmp=k;
    while(k_tmp!=0){
      k_tmp=k_tmp>>1;
      l=l<<1;
    }
    l=l>>1;
    pnt=((double)x/l)*((double)(2*(k-l)+1)/2);
    printf("%Lf\n",pnt);
  }
  return 0;
}
