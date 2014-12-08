#include <bits/stdc++.h>

using namespace std;

long long inp()
{
  long long num = 0;
  char c = getchar_unlocked();
  long long flag = 0;
  while(!((c>='0' & c<='9') || c == '-'))
    c=getchar_unlocked();
  if(c == '-')
    {
      flag = 1;
      c=getchar_unlocked();
    }
  while(c>='0' && c<='9')
    {
      num = (num<<1)+(num<<3)+c-'0';
      c=getchar_unlocked();
    }
  if(flag==0)
    return num;
  else
    return -1*num;
}

int main(){
  int t,n,k,i,grp_size,dif,ans;
  t=inp();
  while(t--){
    n=inp();
    k=inp();
    int arr[n];
    for(i=0;i<n;i++)
      arr[i]=inp();
    i=n-1;
    grp_size=0;
    ans=0;
    while(i>0){
      grp_size++;
      dif=arr[i]-arr[i-1];
      ans+=(dif-1)*(1+((grp_size-1)/k));
      i--;
    }
    ans+=(arr[0]-1)*(1+((grp_size)/k));
    printf("%d\n",ans);
  }
  return 0;
}
