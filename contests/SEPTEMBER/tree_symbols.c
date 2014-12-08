#include <stdio.h>

int main(){
  long long t,res=1,i;
  scanf("%lld",&t);
  while(t--){
    char s[100001];
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
      if(i%2==0){
	if(s[i]=='l')
	  res=(long long)(res*2)%1000000007;
	else
	  res=(long long)(res*2+2)%1000000007;
      }
      else{
	if(s[i]=='l')
	  res=(long long)(res*2-1)%1000000007;
	else
	  res=(long long)(res*2+1)%1000000007;
      }
    }
    printf("%lld\n",res);
    res=1;
  }
  return 0;
}
