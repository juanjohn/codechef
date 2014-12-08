#include <bits/stdc++.h>

using namespace std;

inline int inp()
{
  int n = 0, c = getchar_unlocked(), f = 1;
  while(c != '-' && (c < '0' || c > '9')) c = getchar_unlocked();
  if(c == '-')
    {
      f = -1;
      c = getchar_unlocked();
    }
  while(c >= '0' && c <= '9')
    n = (n<<3) + (n<<1) + c - '0', c = getchar_unlocked();
  return n * f;
}

int main(){
  int t,i,n,h[500],k[500];
  long long totdis=0;
  t=inp();
  while(t--){
    totdis=0;
    n=inp();
    for(i=0;i<n;i++){
      h[i]=inp();
      totdis+=2*h[i];
    }
    for(i=0;i<n;i++)
      k[i]=inp();
    sort(k,0,n-1);
    
  }
  return 0;
}
