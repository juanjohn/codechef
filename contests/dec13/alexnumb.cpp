#include <bits/stdc++.h>

using namespace std;

int main(){
  long long t,n,i;
  scanf("%lld",&t);
  while(t--){
    scanf("%lld",&n);
    long long arr[n];
    for(i=0;i<n;i++){
      scanf("%lld",&arr[i]);
    }
    printf("%lld\n",(n*(n-1)/2));
  }
  return 0;
}
