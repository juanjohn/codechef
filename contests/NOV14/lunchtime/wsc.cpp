#include <bits/stdc++.h>

using namespace std;

int main(){
  int t,n,i,j,m,a,b,a1,a2,b1,b2,uni;
  bool flag;
  scanf("%d",&t);
  while(t--){
    a1=a2=b1=b2=-1;
    flag=true;
    scanf("%d%d",&n,&m);
    int arr[n][n];
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
	arr[i][j]=0;
    if(m<2){
      while(m--)
	scanf("%d%d",&a,&b);
      printf("YES\n");
      continue;
    }
    else{
      uni=-1;
      scanf("%d%d",&a1,&b1);
      arr[a1-1][b1-1]=1;
      m--;
      scanf("%d%d",&a2,&b2);
      arr[a2-1][b2-1]=1;
      m--;
      if(a2==a1 || a2==b1)
	uni=a2-1;
      if(b2==a1 || b2==b1)
	uni=b2-1;
      if(uni==-1)
	flag=false;
      
      while(m--){
	scanf("%d%d",&a,&b);
	arr[a-1][b-1]=1;
      }
    for(i=0;i<n;i++){
      arr[i][uni]=0;
      arr[uni][i]=0;
    }
    for(i=0;i<n;i++)
      for(j=0;j<n;j++){
	if(arr[i][j]==1)
	  flag=false;
      }	
    if(flag){
      printf("YES\n");
    }
    else{
      printf("NO\n");
    }
    }
  }
  return 0;
}
