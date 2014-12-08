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
  while(true){
    int n;int i;
    inp(&n);
    if(n==0)
      break;
    else{
      int arr[n];
      int rarr[n];
      for(i=0;i<n;i++){
	inp(arr+i);
	rarr[arr[i]-1]=i+1;
      }
      for(i=0;i<n;i++){
	if(arr[i]==rarr[i])
	  continue;
	else{
	  i++;
	  break;
	}
      }
      if(i==n)
	printf("ambiguous\n");
      else
	printf("not ambiguous\n");
    }
  }
  return 0;
}
