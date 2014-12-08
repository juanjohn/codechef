#include <stdio.h>

int abs(int a){
  if(a>=0)
    return a;
  else
    return -a;
}

int inp()
{
  int num = 0;
  char c = getchar_unlocked();
  int flag = 0;
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
  int t,n,i,j,min;
  long long ans;
  t=inp();//scanf("%d",&t);
  while(t--){
    ans=0;
    n=inp();//scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
      arr[i]=inp();//scanf("%d",arr+i);
    for(j=0;j<n;j++){
      if(arr[j]<0)
	break;
    }
    for(i=0;i<n;i++)
      if(arr[i]>0)
	break;

    for(;!(i==j && i==n);){
      min=abs(arr[i])>abs(arr[j])?abs(arr[j]):abs(arr[i]);
      ans+=(abs(j-i))*min;
      arr[i]-=min;
      arr[j]+=min;
      
      if(arr[j]==0)
	for(;j<n;j++){
	  if(arr[j]<0)
	    break;
	}
      if(arr[i]==0)
	for(;i<n;i++){
	  if(arr[i]>0)
	    break;
	}
    }
    /*
    for(i=0;i<n-1;i++){
      for(j=i+1;j<n;j++){
	if(arr[i]*arr[j]<0){
	  min=abs(arr[i])>abs(arr[j])?abs(arr[j]):abs(arr[i]);
	  if(arr[i]<0){
	    ans+=(abs(j-i))*min;
	    arr[i]+=min;
	    arr[j]-=min;
	  }
	  else{
	    ans+=(abs(j-i))*min;
	    arr[i]-=min;
	    arr[j]+=min;
	  }
	}
      }
    }
    */
    printf("%lld\n",ans);
  }
  return 0;
}
