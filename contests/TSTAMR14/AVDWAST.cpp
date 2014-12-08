#include <iostream>
#include <math.h>
#include <cmath>
#include <stdio.h>

using namespace std;

struct node{
  int food;
  int exp;
  int oexp;
  node *next;
};
node *head,*tail;

void quicksort(node *x[],int first,int last){
  int pivot,j,i;
  node *temp;

  if(first<last){
    pivot=first;
    i=first;
    j=last;

    while(i<j){
      while(x[i]->exp<=x[pivot]->exp&&i<last)
	i++;
      while(x[j]->exp>x[pivot]->exp)
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

int main(){
  int t,n,v,u,l,i,j,wasted,time,smalltime;
  bool jump;
  scanf("%d",&t);
  while(t--){
    wasted=0;
    time=0;
    scanf("%d",&n);
    node *arr[n];
    for(i=0;i<n;i++){
      scanf("%d%d%d",&v,&u,&l);
      node *ptr=new node;
      ptr->food=v;
      ptr->exp=u;
      ptr->oexp=l;
      arr[i]=ptr;
    }
    quicksort(arr,0,n-1);
    for(i=0;i<n-1;i++){
      jump=false;
      smalltime=min(arr[i]->oexp,arr[i]->exp-time);
      smalltime=smalltime*2>arr[i]->food?arr[i]->food/2:smalltime;
      if(arr[i]->food%2==1){
	for(j=i+1;j<n;j++){
	  if(arr[j]->exp>=time+smalltime){
	    arr[j]->food-=1;
	    arr[i]->food+=1;
	    jump=true;
	    break;
	  }
	  else{
	    continue;
	  }
	}
	if(false){
	  break;
	}
      }
      smalltime=min(arr[i]->oexp,arr[i]->exp-time);
      if(smalltime<=0)
	wasted+=arr[i]->food;
      else{
	wasted+=smalltime*2>arr[i]->food?0:arr[i]->food-smalltime*2;
	time+=smalltime*2>arr[i]->food?arr[i]->food/2:smalltime;
      }
    }
    smalltime=min(arr[i]->oexp,arr[i]->exp-time);
    if(smalltime<=0)
      wasted+=arr[i]->food;
    else{
      wasted+=smalltime*2>arr[i]->food?0:arr[i]->food-smalltime*2;
      time+=smalltime*2>arr[i]->food?arr[i]->food/2:smalltime;
    }
    printf("%d\n",wasted);
  }
  return 0;
}
