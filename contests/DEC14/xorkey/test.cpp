#include <stdio.h>

int main(){
  long long sum = 1023,t,n,k,i,j,max;
  int arr[1000];
  scanf("%lld",&t);
  while(t--){
    scanf("%lld%lld",&n,&k);
    for(i=0;i<n;i++)
      scanf("%lld",&arr[i]);
    bool subset[1024][n+1];
    for (i = 0; i <= n; i++)
      subset[0][i] = true;
    for (i = 1; i <= sum; i++)
      subset[i][0] = false;
    for (i = 0; i <= sum; i++){
      for (j = 1; j <= n; j++){
	subset[i][j] = subset[i][j-1];
	subset[i][j] = subset[i][j] || subset[i ^ arr[j-1]][j-1];
      }
    }
    for(i=0;i<=10;i++){
      for(j=0;j<=n;j++)
	printf("%lld ",subset[i][j]);
      printf("\n");
    }
      //if((subset[i][n]^k)>max)
      //max=subset[i][n]^k;
    //    printf("%lld\n",max);
  }
  return 0;
}
