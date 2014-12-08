#include <bits/stdc++.h>

using namespace std;

int main(){
  int t,i,cnt;
  bool flag;
  int offset=0;
  char arr[100001];
  int ans[100001];
  scanf("%d",&t);
  while(t--){
    cnt=0;
    offset=0;
    flag=true;
    scanf("%s",arr);
    for(i=1;arr[i]!='\0';i++){
      if(arr[i]!=arr[i-1]){
	if(abs(arr[i]-arr[i-1])==1 || abs(arr[i]-arr[i-1])==4)
	  break;
	else{
	  offset=5;
	  break;
	}
      }
      cnt++;
    }
    if(cnt%2==1)
      if(offset==0)
	offset=5;
      else
	offset=0;
    ans[0]=offset+arr[0]-'A';
    for(i=1;arr[i]!='\0';i++){
      if(abs(arr[i]-arr[i-1])==0){
	if(offset==0)
	  offset=5;
	else
	  offset=0;
	ans[i]=arr[i]+offset-'A';
      }
      else{
	if(offset==0){
	  if(abs(arr[i]-arr[i-1])==1 || abs(arr[i]-arr[i-1])==4){
	    ans[i]=arr[i]+offset-'A';
	  }
	  else{
	    flag=false;
	    break;
	  }
	}
	else{
	  if(abs(arr[i]-arr[i-1])==2 || abs(arr[i]-arr[i-1])==3){
	    ans[i]=arr[i]+offset-'A';
	  }
	  else{
	    flag=false;
	    break;
	  }
	  /*if(arr[i]>arr[i-1]){
	    if(arr[i]!=arr[i-1]+2){
	      flag=false;
	      break;
	    }
	    else{
	      ans[i]=arr[i]+offset-'A';
	    }
	  }
	  else{
	    if(arr[i]!=arr[i-1]-3){
	      flag=false;
	      break;
	    }
	    else{
	      ans[i]=arr[i]+offset-'A';
	    }
	    }*/
	}
      }
    }
    if(flag){
      for(i=0;arr[i]!='\0';i++)
	printf("%d",ans[i]);
      printf("\n");
    }
    else{
      printf("-1\n");
    }
  }
  return 0;
}
