#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int main(){
  int t,cnt=0;char j[101];bool lookup[128];char s[101];
  scanf("%d",&t);
  while(t--){
    //memset(lookup,false,127);
    for(int i=0;i<=127;i++)
      lookup[i]=false;
    scanf("%s",j);
    for(int i=0;j[i]!='\0';i++){
      lookup[j[i]]=true;
    }
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++){
      if(lookup[s[i]]==true){
	lookup[s[i]]=false;
	cnt++;
      }
    }
    printf("%d\n",cnt);
    cnt=0;
  }
  return 0;
}
