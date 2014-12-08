#include <stdio.h>

int main(){
  int t;int ans;
  scanf("%d",&t);
  while(t--){
    int a;
    scanf("%d",&a);
    while(a!=0){
      ans=a;
      a=a&(a-1);
    }
    printf("%d\n",ans);
  }
  return 0;
}
