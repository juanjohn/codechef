#include <stdio.h>

int main(){
  int a,b,ans;
  scanf("%d",&a);
  scanf("%d",&b);
  ans=a-b;
  if(ans%10!=9)
    ++ans;
  else
    --ans;
  printf("%d",ans);
  return 0;
}
