#include <stdio.h>
#include<iostream>
using namespace std;
int main(){
  int n,m,i,start=0;
  char a;
  int key;
  scanf("%d%d",&n,&m);
  int arr[n];
  for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
  }
  while(m--){
    cin>>a;
    scanf("%d",&key);

    if(a=='C'){
      start=(start+key)%n;
    }
    else if(a=='A'){
      start=(n+start-key)%n;
    }
    else if(a=='R'){
      printf("%d\n",arr[(n+start+key-1)%n]);
    }
    else{}
  }
  return 0;
}
