#include <stdio.h>

int main(){
  int t,n,i,m,avlble,cleans,issitting[401],lkp[401];
  scanf("%d",&t);
  while(t--){
    scanf("%d%d",&n,&m);
    avlble=n;cleans=0;
    int per[m];
    int lastguy[m];
    int table[n];
    for(i=0;i<m;i++){
      scanf("%d",&per[i]);
      issitting[per[i]]=-1;
    }
    for(i=0;i<401;i++){
      lkp[i]=-1;
    }
    int cnt=0;
    for(i=m-1;i>=0;i--){
      if(lkp[per[i]]==-1){
	lkp[per[i]]=1;
	lastguy[cnt++]=per[i];
      }      
    }
    for(i=0;i<m;i++){
      if(issitting[per[i]]==-1){
	if(i<n){
	  cleans++;
	  table[i]=per[i];
	  issitting[per[i]]=i;
	}
	else{
	  if(lastguy[--cnt])
	}
      }
    }
  }
}
