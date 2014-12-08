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

bool istrue(int *arr,int a,int b){
  long long product=1,size=0;
  for(int i=a;i<b;i++){
    for(int j=i;j<b;j++){
      if(arr[i]<arr[j]){
	if(arr[j]%arr[i]==)
      }
      else{
	
      }
    }
  }
  /*  for(int i=a;i<=b;i++){
    if(gcd(arr[i],product)==1){
      size++;
      product*=arr[i];
      
    }
    else
      break;
      }*/
  if(size==b-a+1)
    return true;
  else
    return false;
}

int main(){
  int t,n,i,j,size=1,max=0;
  bool truth=true;
  int product=1;
  inp(t);//scanf("%d",&t);
  while(t--){
    inp(n);//scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
      inp(arr[i]);//scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
      for(j=i;j<n;j++){
	truth=istrue(arr,i,j);
	if(truth)
	  if(j-i+1>max)
	    max=j-i+1;
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
