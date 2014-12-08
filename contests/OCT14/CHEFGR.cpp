#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  int t,n,m,i,sum;
  cin>>t;
  while(t--){
    sum=0;
    scanf("%d%d",&n,&m);
    int arr[n];
    for(i=0;i<n;i++){
      scanf("%d",arr+i);
      sum+=*(arr+i);
    }
    if((sum+m)%n==0)
      printf("Yes\n");
    else
      printf("No\n");
  }
  return 0;
}
