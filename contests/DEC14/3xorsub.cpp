#include <bits/stdc++.h>

using namespace std;

long long calc_max(long long *arr,long long n,long long k){
  long long temp,i;
  if(n==1)
    return max(k,(k^arr[0]));
  else{
    temp=calc_max(arr+1,n-1,k);
    return max((arr[0]^temp),temp);
  }
}

int main(){
  long long t,n,k,i;
  long long arr[1001];
  scanf("%lld",&t);
  while(t--){
    scanf("%lld",&n);
    scanf("%lld",&k);
    for(i=0;i<n;i++)
      scanf("%lld",&arr[i]);
    printf("%lld\n",calc_max(arr,n,k));
  }
  return 0;
}