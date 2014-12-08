#include <iostream>

using namespace std;

int main(){
  int t;
  while(t--){
    int n,m;
    cin>>n>>m;
    int arr[m];
    int cleans=0;
    int tables[n];int tablec=0;
    int maxvalue=0;
    for(int i=0;i<m;i++){
      cin>>arr[i];
      if(arr[i]>maxvalue)
	maxvalue=arr[i];
    }
    int lookup[maxvalue+1];
    for(int i=0;i<maxvalue+1;i++){
      lookup[i]=0;
    }
    for(int i=0;i<m;i++){
      int cus=arr[i];
      if(tablec<n){
	cleans++;
	tables[tablec++]=cus;
	lookup[cus]=1;
      }
      else{
	
      }
    }
    cout<<cleans<<endl;
    
  }
  return 0;
}
