#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  int t,n,p,i,fit,cnt;
  scanf("%d",&t);
  while(t--){
    cnt=0;
    scanf("%d%d",&n,&p);
    for(i=0;i<n;i++){
      scanf("%d",&fit);
      if(fit>=p)
	cnt++;
    }
    printf("%d\n",cnt);
  }
  return 0;
}
