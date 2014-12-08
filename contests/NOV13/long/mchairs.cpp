#include <bits/stdc++.h>
#define MOD 1000000007

using namespace std;

long long power(long long a,long long b){
  long long x;
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

int main(){
  long long t,n,i,fq,fr;
  scanf("%lld",&t);
  while(t--){
    scanf("%lld",&n);
    printf("%lld\n",power(2,n)-1);
  }
}
