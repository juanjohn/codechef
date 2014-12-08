#include <bits/stdc++.h>

using namespace std;

int main(){
  int t,cnt;
  bool lkp[26];
  cin>>t;
  char arr[100001];
  while(t--){
    cnt=0;
    for(int i=0;i<26;i++){
      lkp[i]=false;
    }
    cin>>arr;
    for(int i=0;arr[i]!='\0';i++){
      if(!lkp[arr[i]-97]){
	cnt++;
	lkp[arr[i]-97]=true;
      }
    }
    cout<<cnt<<endl;
  }
  return 0;
}
