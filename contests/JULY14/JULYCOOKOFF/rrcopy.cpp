#include <stdio.h>

using namespace std;

void minimise(long long *arr,long long n){
  long long lookup[100001];
  for(long long i=0;i<100001;i++){
    lookup[i]=0;
  }
  long long cnt=0;
  for(long long i=0;i<n;i++){
    if(lookup[arr[i]]==0){
      lookup[arr[i]]=1;
      cnt++;
    }
  }
  printf("%lld\n",cnt);
  return;
}

int main(){
  long long t;
  scanf("%lld",&t);
  while(t--){
    long long n;
    scanf("%lld",&n);
    long long arr[n];
    for(long long i=0;i<n;i++)
      scanf("%lld",&arr[i]);
    minimise(arr,n);
  }
  return 0;
}
