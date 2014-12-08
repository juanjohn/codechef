#include <stdio.h>
#include <math.h>

int main(){
  long long t,a,b,k;
  scanf("%lld",&t);
  while(t--){
    scanf("%lld",&k);
    a=103993;
    b=33102;
    printf("%lld",a/b);
    if(k>0)
      printf(".");
    while(k--){
      a=a%b;
      a*=10;
      printf("%lld",a/b);
    }
    printf("\n");
  }
  return 0;
}
