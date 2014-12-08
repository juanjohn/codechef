#include <bits/stdc++.h>

using namespace std;

int main(){

  int t,n,m,i,j,a,b,n1,n2;
  int uni;
  bool flag;
  scanf("%d",&t);
  while(t--){
    flag=true;
    n1=-1;
    scanf("%d%d",&n,&m);
    if(m<2){
      while(m--)
	scanf("%d%d",&a,&b);
      printf("YES\n");
      continue;
    }
    else{
      uni=-1;
      scanf("%d%d",&n1,&n2);
      m--;
      scanf("%d%d",&a,&b);
      m--;
      if(a==n1 || a==n2)
	uni=a;
      if(b==n1 || b==n2)
	uni=b;
      if(uni==-1)
	flag=false;
      while(m--){
	scanf("%d%d",&a,&b);
	if(!(a==uni || b==uni))
	  flag=false;
      }
      if(flag)
	printf("YES\n");
      else
	printf("NO\n");
    }
  }
  return 0;
}
