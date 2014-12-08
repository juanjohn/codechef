#include <stdio.h>

#define getcx getchar_unlocked

inline void inp(int *n )//fast input function
{
  *n=0;
  int ch=getcx();
  while(! (ch >= '0' && ch <= '9'))
    ch=getcx();
  while(  ch >= '0' && ch <= '9' )
    *n = (*n<<3)+(*n<<1) + ch-'0', ch=getcx();
}

int main(){
  int r,c;
  scanf("%d",&r);
  scanf("%d",&c);
  int arr[r][c];
  for(int i=0;i<r;i++)
    for(int j=0;j<c;j++)
      inp(&arr[i][j]);
  int t;
  scanf("%d",&t);
  while(t--){
    int a,b,c,d;
    inp(&a);
    inp(&b);
    inp(&c);
    inp(&d);
    int sum=0;
    for(int i=a;i<=c;i++)
      for(int j=b;j<=d;j++)
	sum+=arr[i-1][j-1];
    printf("%d\n",sum);
  }  
}
