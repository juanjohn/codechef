#include <stdio.h>

int main(){
  int arr[26];int cnt;
  for(int i=0;i<26;i++){
    arr[i]=0;
  }
  arr[17]=arr[16]=arr[15]=arr[14]=arr[3]=arr[0]=1;
  arr[1]=2;
  int t;
  scanf("%d",&t);
  while(t--){
    cnt=0;
    char str[101];
    scanf("%s",str);
    for(int i=0;str[i]!='\0';i++){
      cnt+=arr[str[i]-65];
    }
    printf("%d\n",cnt);
  }
  return 0;
}
