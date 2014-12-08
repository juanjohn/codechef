#include <stdio.h>

int main(){
  int t,i,cst;char str[201];int lkp[123];
  scanf("%d",&t);
  while(t--){
    cst=0;
    scanf("%s",str);
    for(i=65;i<123;i++){
      lkp[i]=0;
    }
    for(i=0;str[i]!='\0';i++){
      if(lkp[str[i]]==0){
	lkp[str[i]]=1;
	cst++;
      }
      else{
	lkp[str[i]]=0;
      }
    }
    printf("%d\n",cst);
  }
  return 0;
}
