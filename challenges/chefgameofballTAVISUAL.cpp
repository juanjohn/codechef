#include <stdio.h>

int main(){
  int t,l,r,n,c,q;
  scanf("%d",&t);
  while(t--){
    scanf("%d%d%d",&n,&c,&q);
    while(q--){
      scanf("%d%d",&l,&r);
      if(c>=l && c<=r){
	c=r-(c-l);
      }
    }
    printf("%d\n",c);
  }
  return 0;
}
