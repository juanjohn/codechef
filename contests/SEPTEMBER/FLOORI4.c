#include <stdio.h>
#include <cmath>

long long term(long long i,long long n,long long m){
  long long res,part;
  res=(long long)((((((i%m)*i)%m)*i)%m)*i)%m;
  part=(long long)floor(n,i);
  res=(long long)(res*part)%m;
  return res;
}

int main(){
  long long t,n,m,i,sum=0;
  scanf("%lld",&t);
  while(t--){
    scanf("%lld%lld",&n,&m);
    for(i=1;i<=n;i++){
      sum=(long long)(sum+term(i,n,m))%m;
    }
    sum=sum%m;
    printf("%lld\n",sum);
  }
  return 0;
}
