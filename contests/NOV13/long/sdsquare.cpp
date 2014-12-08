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
  long long arr[100001];
  long long t,a,b,i,sq,dig,numd,cnt,n=0;
  t=inp();
  for(i=0;i<=100000;i++){
    sq=i*i;
    numd=0;
    cnt=0;
    while(sq!=0){
      numd++;
      dig=sq%10;
      sq/=10;
      if(dig==0 || dig==1 || dig==4 || dig==9)
	cnt++;
    }
    if(numd==cnt)
      arr[n++]=i*i;
    numd=cnt=0;
  }
  while(t--){
    a=inp();
    b=inp();
    cnt=0;
    for(i=0;i<n;i++)
      if(arr[i]>=a)
	break;
    for(;i<n;i++)
      if(arr[i]<=b)
	cnt++;
      else
	break;
    printf("%d\n",cnt);
  }
  return 0;
}
