#include <iostream>

using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int evenCount=0;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
      if(arr[i]%2==0)
	evenCount++;
    }
    if(k==0){
      if(evenCount<n)
	cout<<"YES"<<endl;
      else
	cout<<"NO"<<endl;
    }
    else{
    if(k<=evenCount)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
    }
  }
  return 0;
}
