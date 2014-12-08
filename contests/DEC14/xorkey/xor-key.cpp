#include <bits/stdc++.h>

using namespace std;

int main(){
  long long t,n,k,i,j,val,max,lcnt,xorv;
  long long arr[1001];
  scanf("%lld",&t);
  while(t--){
    max=0,xorv=0;
    scanf("%lld",&n);
    scanf("%lld",&k);
    xorv=k;
    scanf("%lld",&arr[0])
    for(i=1;i<n;i++){
      scanf("%lld",&arr[i]);
      arr[i]^=arr[i-1];
    }
    while(q--){
      
    }
    
  }
  return 0;
}
