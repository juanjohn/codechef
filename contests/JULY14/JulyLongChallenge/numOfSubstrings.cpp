#include <iostream>

using namespace std;

int main(){
  long long t,n,cnt=0;
  cin>>t;
  long long test=t;
  long long ans[t];
  while(t--){
    cin>>n;
    char arr[n];
    cin>>arr;
    for(long long i=0;i<n;i++){
      if(arr[i]=='1')
      cnt++;
    }
    long long num=cnt+cnt*(cnt-1)/2;
    ans[test-t-1]=num;
    cnt=0;
  }
  for(long long i=0;i<test;i++){
    cout<<ans[i]<<endl;
  }
  return 0;
}
