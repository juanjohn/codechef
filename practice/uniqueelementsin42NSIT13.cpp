#include <iostream>

using namespace std;

int main(){
  int t=10;int a;
  int cnt;
  while(t--){
    cnt=0;
    int arr[42];
    for(int i=0;i<42;i++){
      arr[i]=0;
    }
    for(int i=0;i<10;i++){
      cin>>a;
      if(arr[a%42]==0){
	arr[a%42]=1;
	cnt++;
      }
    }
    cout<<cnt<<endl;
  }
  return 0;
}
