#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  int ds,dt,d,t,i,dis;
  scanf("%d",&t);
  while(t--){
    scanf("%d%d%d",&ds,&dt,&d);
    if(d>ds+dt)
      printf("%d\n",d-ds-dt);
    else if(ds>d+dt)
      printf("%d\n",ds-d-dt);
    else if(dt>d+ds)
      printf("%d\n",dt-ds-d);
    else
      printf("%d\n",0);
    /*
    if(ds+dt>=d)
      printf("%d\n",0);
    else{
      dis=max(d-ds-dt);
      printf("%d\n",dis);
      }*/
  }
  
  return 0;
}
