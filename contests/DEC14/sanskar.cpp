#include <bits/stdc++.h>

using namespace std;

int main(){
  long long t,n,i,j,k,each,curcnt,sum;
  long long arr[30];
  bool all[30];
  scanf("%lld",&t);
  while(t--){
    scanf("%lld%lld",&n,&k);
    sum=0;
    for(i=0;i<n;i++){
      scanf("%lld",&arr[i]);
      sum+=arr[i];
    }
    if(sum%k!=0){
      printf("no\n");
      continue;
    }
    each=sum/k;

    sort(arr,arr+n);
    for(i=0;i<n;i++)
      all[i]=false;

    for(i=0;i<k;i++){
      curcnt=0;
      for(j=n-1;j>=0;j--){
	if(arr[j]<=(each-curcnt) && all[j]==false){
	  curcnt+=arr[j];
	  printf("%lld ",arr[j]);
	  all[j]=true;
	}
      }
      printf("\n");
      if(curcnt!=each){
	printf("no\n");
	goto nextiter;
      }
    }
    printf("yes\n");

  nextiter:;
  }
  return 0;
}
