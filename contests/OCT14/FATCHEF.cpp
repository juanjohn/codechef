#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define MOD 1000000009

using namespace std;

struct node{
  int data;
  char col;
};

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

void merge(node *array[], int start, int mid, int end) {
  node *left_array[mid-start+1];//=(node *)calloc(5, mid-start+1);
  node *right_array[end-mid];//=(node *)calloc(5, end-mid);
  int i, j, k;
  for(i=0; i<mid-start+1; i++) {
    left_array[i]=array[start+i];
  }
  for(j=0; j<end-mid; j++) {
    right_array[j]=array[mid+1+j];
  }
  i=0;
  j=0;
  for(k=start; k<=end; k++) {
    if((i<mid-start+1 && j<end-mid && left_array[i]->data<=right_array[j]->data) || j>=end-mid) {
      array[k]=left_array[i];
      i++;
    }
    else if((i<mid-start+1 && j<end-mid && left_array[i]->data>right_array[j]->data) || i>=mid-start+1) {
      array[k]=right_array[j];
      j++;
    }
  }
  return;
}

void merge_sort(node *array[], int start, int end) {
  int mid;
  if(start<end) {
    mid=(start+end)/2;
    merge_sort(array, start, mid);
    merge_sort(array, mid+1, end);
    merge(array, start, mid, end);
  }
  return;
}

void quicksort(node *x[],int first,int last){
  int pivot,j,i;
  node *temp;

  if(first<last){
    pivot=first;
    i=first;
    j=last;

    while(i<j){
      while(x[i]->data<=x[pivot]->data&&i<last)
	i++;
      while(x[j]->data>x[pivot]->data)
	j--;
      if(i<j){
	temp=x[i];
	x[i]=x[j];
	x[j]=temp;
      }
    }

    temp=x[pivot];
    x[pivot]=x[j];
    x[j]=temp;
    
    quicksort(x,first,j-1);
    quicksort(x,j+1,last);
    
  }
}


void sorsssst(node *x[],int n){
  int i,j;
  for(i=1;i<n;i++){
    for(j=i;j>0;j--){
      if(x[j-1]->data>x[j]->data){
	node *temp=x[j-1];
	x[j-1]=x[j];
	x[j]=temp;
      }
    }
  }
  return;
}

int main(){
  int t,m,n,i,data;
  int current,count=0;
  long long ans=1;
  char col;
  t=inp();//scanf("%d",&t);
  while(t--){
    ans=1;
    count=0;
    n=inp();
    m=inp();//scanf("%d%d",&n,&m);
    node *arr[m];
    for(i=0;i<m;i++){
      node *ptr=new node;
      cin>>col;
      data=inp();
      ptr->data=data-1;
      ptr->col=col;
      arr[i]=ptr;
    }
    quicksort(arr,0,m-1);
    current=arr[0]->col;
    for(i=1;i<m;i++){
      if(arr[i]->col!=current){
	count++;
	ans*=(arr[i]->data-arr[i-1]->data);
	if(ans>MOD)
	  ans=ans%MOD;
	current=arr[i]->col;
      }
    }
    printf("%lld\n",ans);
  }
}
