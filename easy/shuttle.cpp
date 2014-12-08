#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
  if(b==0)
    return a;
  else
    return gcd(b,a%b);
}

int main(){
  int t,n,cnt,i;
  scanf("%d",&t);
  while(t--){
    cnt=0;
    scanf("%d",&n);
    for(i=1;i<n;i++){
      if(gcd(i,n)==1)
	cnt++;
    }
    printf("%d\n",cnt);
  }
  return 0;
}
