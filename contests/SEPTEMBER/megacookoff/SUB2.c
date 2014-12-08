#include <stdio.h>
#define getcx getchar_unlocked

inline void inp( int &n )
{
  n=0;
  int ch=getcx();int sign=1;
  while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}

  while(  ch >= '0' && ch <= '9' )
    n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
  n=n*sign;
}

int gcd(int a,int b){
  if(b==0)
    return a;
  else
    return gcd(b,a%b);
}

int main(){
  int t,n,i,size=1,max=0;
  long long product=1;
  inp(t);
  while(t--){
    inp(n);
    int arr[n];
    for(i=0;i<n;i++){
      inp(arr[i]);
    }
    product=arr[0];
    for(i=1;i<n;i++){
      if(gcd(arr[i],product)==1){
	size++;
	product*=arr[i];
	if(size>max)
	  max=size;
      }
      else{
	product=arr[i];
	size=1;
      }
    }
    if(max==0 || max==1)
      printf("%d\n",-1);
    else
      printf("%d\n",max);
    size=1;max=0;
  }
  return 0;
}
