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
  long long n,q,x,y,m,n2,i,j,l,r,ch,sum;
  n=inp();
  long long lkp1[n];
  long long lkp2[n];
  long long arr[n];
  long long fun[n];
  long long la[n],ra[n];
  arr[0]=inp();
  lkp1[0]=arr[0];
  for(i=1;i<n;i++){
    arr[i]=inp();//scanf("%ld",&arr[i]);
    lkp1[i]=lkp1[i-1]+arr[i];
  }
  
  for(i=0;i<n;i++){
    la[i]=inp()-1;ra[i]=inp()-1;//scanf("%ld%ld",&l,&r);
    if((la[i])!=0)
      fun[i]=lkp1[ra[i]]-lkp1[la[i]-1];
    else
      fun[i]=lkp1[ra[i]];
  }
  q=inp();//scanf("%ld",q);
  while(q--){
    ch=inp();
    if(ch==1){
      x=inp()-1;y=inp();
      for(i=0;i<n;i++){
	if(x>=la[i] && x<=ra[i]){
	  fun[i]=fun[i]-arr[x]+y;
	  //not changing the lkp1 values
	}
      }
      arr[x]=y;
    }
    else{
      m=inp()-1;n2=inp()-1;
      sum=0;
      for(i=m;m<=n2;m++){
	sum+=fun[m];
      }
      printf("%ld\n",sum);
    }
  }
  return 0;
}
