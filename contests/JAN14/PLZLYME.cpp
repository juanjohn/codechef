#include <bits/stdc++.h>

int main(){
  double t,l,d,s,c,sum;
  scanf("%lf",&t);
  while(t--){
    scanf("%lf%lf%lf%lf",&l,&d,&s,&c);
    sum=s*pow(1+c,d-1);
    if(sum>=l)
      printf("ALIVE AND KICKING\n");
    else
      printf("DEAD AND ROTTING\n");
  }
  return 0;
}
