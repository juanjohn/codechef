#include <bits/stdc++.h>

using namespace std;

int main(){
  int t,n,i,cnt,prev;
  int arr[100000];
  scanf("%d",&t);
  while(t--){
    cnt=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    prev=arr[0];
    for(i=1;i<n;i++){
      if(arr[i]!=prev){
	cnt++;
	prev=arr[i];
      }
    }
    printf("%d\n",cnt+1);
  }
  return 0;
}