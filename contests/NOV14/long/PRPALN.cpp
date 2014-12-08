#include <bits/stdc++.h>

using namespace std;

char arr[1000000];

bool ispal(long long a,long long b){
  long long i,cnt=0;
  for(i=0;i<=(b-a)/2;i++){
    if(arr[a+i]!=arr[b-i]){
      break;
    }
  }
  if(!(i<=(b-a)/2)){
    return true;
  }
  else
    return false;
}

int main(){
  long long t,p1,p2,i,j,n;
  bool flag,t1,t2;
  scanf("%lld",&t);
  while(t--){
    flag=true;
    scanf("%s",arr);
    n=strlen(arr);
    for(i=0,j=n-1;i<n/2;i++,j--){
      if(arr[i]!=arr[j]){
	
	t1=ispal(i+1,j);
	t2=ispal(i,j-1);
	if(t1 || t2){
	  goto end;
	}
	else{
	  flag=false;
	  goto end;
	}
      }
    }
  end:;
    if(flag)
      printf("YES\n");
    else
      printf("NO\n");
    
  }
  return 0;
}
