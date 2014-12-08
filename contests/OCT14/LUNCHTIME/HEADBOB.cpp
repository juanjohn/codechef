#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
  int t,i,n;
  scanf("%d",&t);
  while(t--){
    scanf("%d",&n);
    char arr[n+1];
    scanf("%s",arr);
    for(i=0;i<n;i++){
      if(arr[i]=='I'){
	cout<<"INDIAN"<<endl;
	break;
      }
      else if(arr[i]=='Y'){
	cout<<"NOT INDIAN"<<endl;
	break;
      }
      else
	continue;
    }
    if(i==n)
      cout<<"NOT SURE"<<endl;
  }
  return 0;
}
