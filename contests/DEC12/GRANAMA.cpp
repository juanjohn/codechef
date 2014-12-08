#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  int t,i,cnt,cnt1,cnt2;
  int lkp1[58],lkp2[58];
  char str1[1001],str2[1001];
  scanf("%d",&t);
  while(t--){
    scanf("%s",str1);
    scanf("%s",str2);
    cnt=cnt1=cnt2=0;
    for(i=0;i<58;i++){
      lkp1[i]=lkp2[i]=0;
    }
    for(i=0;str1[i]!='\0';i++){
      lkp1[str1[i]-65]++;
    }
    for(i=0;str2[i]!='\0';i++){
      lkp2[str2[i]-65]++;
    }
    for(i=0;i<58;i++){
      if(lkp1[i]!=lkp2[i])
	break;
    }
    if(i==58)
      printf("YES\n");
    else{
      for(i=0;i<58;i++){
	if(lkp1[i]>0){
	  if(lkp2[i]==0)
	    break;
	}
	if(lkp2[i]>0){
	  if(lkp1[i]==0)
	    break;
	}
      }
      if(i==58)
	printf("NO\n");
      else
	printf("YES\n");
    }
  }
  return 0;
}
