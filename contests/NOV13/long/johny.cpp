#include <bits/stdc++.h>

using namespace std;

int bsearch(int arr[],int a,int b,int key){

  int mid;
  while(a+1<b){
    mid=(a+b)/2;
    if(key>=arr[mid])
      a=mid;
    else
      b=mid;
  }
  if(arr[a]==key)
    return a;
  else
    return a;
}

int main(){
  int t,n,k,i,j,len_u,pos;
  scanf("%d",&t);
  int arr[1000];
  while(t--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    scanf("%d",&k);
    len_u=arr[k-1];
    sort(arr,arr+n);
    pos=bsearch(arr,0,n,len_u);
    printf("%d\n",pos+1);
  }
  return 0;
}
