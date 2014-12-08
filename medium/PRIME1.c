#include <stdio.h>
#include <math.h>

int main(){
  int t,n;
  scanf("%d",n);
  t=n;
  long long marr[t],narr[t],max=0,til;
  while(t--){
    scanf("%lld%lld",marr[n-t-1],narr[n-t-1]);
    if(narr[n-t-1]>max)
      max=narr[n-t-1];
  }
  til=sqrt(n);
  long long primes[max];  
  return 0;
}
