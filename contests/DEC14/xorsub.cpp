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
    for(i=0;i<n;i++)
      scanf("%lld",&arr[i]);
    lcnt=70;
    while(lcnt--){
      for(i=0;i<n;i++){
	if((xorv^arr[i])>max){
	  max=xorv^arr[i];
	}
      }
      xorv=max;
    }
    printf("%lld\n",max);
  }
  return 0;
}