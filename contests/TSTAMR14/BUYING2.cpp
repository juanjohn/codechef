#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  int n,x,t,arr[110],i,sum,rem,quo;
  bool possible;
  scanf("%d",&t);
  while(t--){
    possible=true;
    sum=0;
    scanf("%d",&n);
    scanf("%d",&x);
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
      sum+=arr[i];
    }
    rem=sum%x;
    quo=sum/x;
    for(i=0;i<n;i++){
      if(arr[i]<=rem){
	possible=false;
	break;
      }
    }
    if(possible)
      printf("%d\n",quo);
    else
      printf("%d\n",-1);
  }
  return 0;
}
