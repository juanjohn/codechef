#include <bits/stdc++.h>

using namespace std;

long long lkp[100000];
long long n,m,q,t,i,r;
long long num,den,mi,ans;

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

long long modInverse(long long a, long long m) {
  a %= m;
  for(long long x = 1; x < m; x++) {
    if((a*x) % m == 1) return x;
  }
}
void hardcoded(){
  while(q--){
    den=1;
    num=1;
    r=inp();//scanf("%ld",&r);
    r=max(r,n-r);
    for(i=r+1;i<=n;i++){
      num*=pow(i,i);
    }
    for(i=1;i<=(n-r);i++){
      den*=pow(i,i);
    }
    //      mi=modInverse(den,m);
    /*      if(mi>m)
	    mi%=m;
	    if(num>m)
	    num%=m;
	    ans=(num*mi);
	    if(ans>m)
	    ans%=m;
    */
    ans=num/den;
    ans=ans%m;
    printf("%d\n",ans);
  }

  return;
}

int main(){
  t=inp();//scanf("%ld",&t);
  while(t--){
    n=inp();m=inp();q=inp();//scanf("%ld%ld%ld",&n,&m,&q);
    if(n<5){
      hardcoded();
      goto endi;
    }
    for(i=0;i<100000;i++){
      lkp[i]=-1;
    }
    
  endi:;
  }
  return 0;
}
