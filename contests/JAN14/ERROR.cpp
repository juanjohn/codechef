#include <bits/stdc++.h>

int main(){
  long long t,i,j,n;
  char arr[100001];
  scanf("%d",&t);
  while(t--){
    scanf("%s",arr);
    if(arr[1]=='\0' || arr[2]=='\0'){
      printf("Bad\n");
      continue;
    }
    else{
      for(i=0;arr[i+2]!='\0';i++){
	if(arr[i]=='0'){
	  if(arr[i+1]=='1' && arr[i+2]=='0'){
	    printf("Good\n");
	    break;
	  }
	}
	else{
	  if(arr[i+1]=='0' && arr[i+2]=='1'){
	    printf("Good\n");
	    break;
	  }
	}
      }
      if(arr[i+2]=='\0')
	printf("Bad\n");
    }
  }
  return 0;
}
