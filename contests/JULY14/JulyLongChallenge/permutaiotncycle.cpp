#include <iostream>
#include <algorithm>

using namespace std;

long long gcd (long long a,long long b){
  long long c;
  if ( b == 0 )
    return a;
  else
    while ( b != 0 ){
      c = b;
      b = a % b;
      a = c;
    }
  return a;
}

long long lcm(long long *arr,long long n){
  long long l=1;
  long long last=1;
  for(long long i=0;i<n;i++){
    if(arr[i]==last){
      continue;
    }
    else{
      last=arr[i];
      l=l*arr[i]/(gcd(l,arr[i]));
    }
  }
  return l;
}

int main(){
  long long t,n,cnt=0,start,next;long long j=0,temp;
  cin>>t;
  while(t--){
    cin>>n;
    j=0;
    long long arr[n];
    long long ans[n];
    for(long long i=0;i<n;i++){
      cin>>arr[i];
      arr[i]-=1;
    }
    for(long long i=0;i<n;i++){
      if(arr[i]==-1){
	continue;	
      }
      else{
	start=i;
	next=arr[i];
	arr[i]=-1;
	while(next!=start){
	  cnt++;
	  temp=next;
	  next=arr[next];
	  arr[temp]=-1;
	}
	ans[j++]=++cnt;
	cnt=0;
      }
    }
    sort(ans,ans+j);
    long long res=lcm(ans,j);
    res=res%(1000000000LL+7LL);
    cout<<res<<endl;
  }
}
