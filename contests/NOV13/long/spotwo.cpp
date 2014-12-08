#include <bits/stdc++.h>
#define MOD 1000000007
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

unsigned long long power(unsigned long long a,unsigned long long b){
  unsigned long long x;
  if(b==1)
    return a;
  if(b%2==0){
    x=power(a,b/2);
    x=x*x;
    return x;
  }
  else{
    x=power(a,b/2);
    x=x*x*a;
    return x;
  }

}

unsigned long long powerm(unsigned long long a,unsigned long long b){
  unsigned long long x;
  if(b==1)
    return a;
  if(b%2==0){
    x=power(a,b/2);
    x=x*x;
    if(x>MOD)
      x%=MOD;
    return x;
  }
  else{
    x=power(a,b/2);
    x=x*x*a;
    if(x>MOD)
      x%=MOD;
    return x;
  }

}

unsigned long long tobinary(unsigned long long a){
  unsigned long long a_bin=0;
  int q,r,i=0;
  while(a>0){
    r=a%2;
    a/=2;
    if(r==1)
      a_bin+=power(10,i);
    i++;
  }
  return a_bin;
}

int main(){
  unsigned long long t,n,arr[600001],n_bin;
  scanf("%llu",&t);
  while(t--){
    scanf("%llu",&n);//n=inp();
    n_bin=tobinary(n);
    
    printf("%llu",n_bin);
  }
  return 0;
}
