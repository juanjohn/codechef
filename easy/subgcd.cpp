#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
  if(b==0)
    return a;
  else
    return gcd(b,a%b);
}

int main(){
  int t,n,i;
  bool flag;
  scanf("%d",&t);
  while(t--){
    flag=false;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
    }
    int a=arr[0];
    for(i=1;i<n;i++){
      if(gcd(a,arr[i])==1){
	flag=true;
	break;
      }
    }
    if(flag)
      printf("%d\n",n);
    else
      printf("%d\n",-1);
  }
  return 0;
}
