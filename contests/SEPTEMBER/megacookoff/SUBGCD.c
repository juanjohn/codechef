#include <stdio.h>
long long gcd(long long a,long long b){
  if(b==0)
    return a;
  else
    return gcd(b,a%b);
}
int main(){
  long long t,n,i,size=1,max=0;
  long long product=1;
  scanf("%lld",&t);//inp(t);
  while(t--){
    scanf("%lld",&n);
    int arr[n];
    for(i=0;i<n;i++){
      scanf("%lld",&arr[i]);
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
      printf("%lld\n",max);
    size=1;max=0;
  }
  return 0;
}
