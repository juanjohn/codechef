#include <bits/stdc++.h>

using namespace std;

int main(){
  int t,n,m,a,b,temp,i;
  bool flag;
  int lkp[15];
  scanf("%d",&t);
  while(t--){
    flag=false;
    for(i=0;i<15;i++)
      lkp[i]=0;
    scanf("%d%d",&n,&m);
    temp=m;
    while(m--){
      scanf("%d%d",&a,&b);
      lkp[a]++;
      lkp[b]++;
    }
    for(i=0;i<=n;i++){
      if(lkp[i]==temp){
	flag=true;
	break;
      }
    }
    /*    for(i=0;i<15;i++)
      cout<<lkp[i];
      cout<<" "<<temp;*/
    if(flag)
      printf("YES\n");
    else
      printf("NO\n");
  }
  return 0;
}
