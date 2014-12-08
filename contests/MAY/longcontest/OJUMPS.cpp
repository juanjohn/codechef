#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  long long a;
  int rem;
  scanf("%lld",&a);
  rem=a%6;
  if(rem==0 || rem==1 || rem==3)
    printf("yes\n");
  else
    printf("no\n");
  return 0;
}
