#include <stdio.h>

using namespace std;

void replace(long long *arr,long long a,long long b,long long n){
  for(long long i=0;i<n;i++){
    if(arr[i]==a)
      arr[i]=b;
  }
  return;
}

int main(){
  long long t;
  scanf("%lld",&t);
  while(t--){
    long long n;
    scanf("%lld",&n);
    long long arr[n];
    long long s[n];
    for(long long i=0;i<n;i++){
      arr[i]=i;
      scanf("%lld",&s[i]);
    }
    long long q;
    scanf("%lld",&q);
    while(q--){
      long long a,x,y;
      scanf("%lld",&a);
      if(a==0){
	scanf("%lld %lld",&x,&y);
	if(arr[x-1]==arr[y-1])
	  printf("Invalid query!\n");
	else{
	  if(s[x-1]>s[y-1])
	    replace(arr,arr[y-1],arr[x-1],n);
	  else if(s[x-1]<s[y-1])
	    replace(arr,arr[x-1],arr[y-1],n);
	  else
	    continue;
	}
      }
      else{
	scanf("%lld",&x);
	printf("%lld\n",arr[x-1]+1);
      }
    }
  }
}
