#include <iostream>

using namespace std;

long long reverse,count;

bool ispalindrome(long long n){
  long long temp=n;
  long long digit;
  reverse=0;
  while(temp>0){
    digit=temp%10;
    temp=temp/10;
    reverse=reverse*10+digit;
  }
  if(reverse==n)
    return true;
  else
    return false;
}

void operate(long long *n){
  *n=*n+reverse;
  count++;
  return ;
}

int main(){
  long long t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    count=0;
    while(!ispalindrome(n)){
      operate(&n);
    }
    cout<<count<<" "<<n<<endl;
  }
  return 0;
}
