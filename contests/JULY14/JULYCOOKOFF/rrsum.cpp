#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main(){
  long long n,m,q;
  scanf("%lld%lld",&n,&m);
  for(int i=0;i<m;i++){
    scanf("%lld",&q);
    long long max=2*n+1;
    long long num=n-abs(max-q);
    if(num<0)
      cout<<0<<endl;
    else
      cout<<num<<endl;
  }
  return 0;
  
}
