#include <iostream>
#include <cmath>

using namespace std;

int main(){
  long long t,x,y;
  cin>>t;
  while(t--){
    cin>>x>>y;
    x=abs(x);
    y=abs(y);
    int a=min(x,y);int b=max(x,y);
    int moves=2*a;
    if(x>=y)
      moves+=(b-a)%2==0?(b-a)/2*4:(b-a)/2*4+3;
    else
      moves+=(b-a)%2==0?(b-a)/2*4:(b-a)/2*4+1;
    cout<<moves<<endl;
  }
  return 0;
}
