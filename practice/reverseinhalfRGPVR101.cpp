#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main(){
  int n;
  scanf("%d",&n);
  while(n--){
    char arr[51];
    string output="";
    int len=0;
    scanf("%s",arr);
    for(int i=0;arr[i]!='\0';i++)
      len++;
    for(int i=0;i<len/2;i++){
      output=arr[i]+output;
    }
    for(int i=len-1;i>=len/2;i--){
      output=output+arr[i];
    }
    cout<<output<<endl;
  }
  return 0;
}
