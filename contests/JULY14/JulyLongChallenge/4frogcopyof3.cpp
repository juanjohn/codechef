#include <iostream>
#include <algorithm>

using namespace std;

long long find(long long *arr,long long a,long long b,long long key){
  long long mid;
  while(a+1<b){
    mid=(a+b)/2;
    if(arr[mid]<=key)
      a=mid;
    else
      b=mid;
  }
  return a;
}

int main(){
  long long n,k,p,a,b,start;
  cin>>n>>k>>p;
  long long arr[n];long long aa[p];long long ba[p];
  for(long long i=0;i<n;i++){
    cin>>arr[i];
  }
  for(long long i=0;i<p;i++){
    cin>>a>>b;
    a=arr[a-1],b=arr[b-1];
    if(a>b){
      a=a^b;
      b=b^a;
      a=b^a;
    }
    aa[i]=a;ba[i]=b;
  }
  sort(arr,arr+n);
  long long j;

  for(long long i=0;i<p;i++){
    //cout<<aa[i]<<" "<<ba[i]<<endl;
  }



  
  for(long long i=0;i<p;i++){
    a=aa[i];b=ba[i];
    start=find(arr,0,n,a);
    //cout<<start<<endl;
    for(j=start+1;arr[j]<=b;j++){
      if(arr[j]-arr[j-1]<=k)
	continue;
      else{
	break;
      }
    }
    if(arr[j]<=b)
      cout<<"No"<<endl;
    else
      cout<<"Yes"<<endl;
  }
  return 0;
}
