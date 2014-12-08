#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

struct node{
  int data;
  int *adr;  
};

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

int bsearch(node *A[], int l, int r, int key){
  int m;
  while(r-l>1){
    m=(l+r)/2;
    if(A[m]->data<=key)
      l=m;
    else
      r=m;
  }
  if(A[l]->data==key)
    return l;
  else
    return -1;
}

int main(){
  int n,i,j,info;
  int a1,a2,a3,a4,a5,a6,b1,b2,b3,b4,b5,b6,ad1,bd1,ad2,bd2;
  int pos,ans=2;
  double r,rcos,rsin,tan;
  bool p3,p4,p5,p6,p7,p8;
  scanf("%d",&n);
  if(n==0){
    printf("%d\n",4);
    return 0;
  }
  else if(n==1){
    scanf("%d%d",a1,a2);
    printf("%d\n",3);
    return 0;
  }
  node *x[n];
  int y[n];
  for(i=0;i<n;i++){
    node *ptr=new node;
    scanf("%d%d",&info,&y[i]);
    ptr->data=info;
    ptr->adr=&y[i];
    x[i]=ptr;
  }
  quicksort(x,0,n-1);
  for(i=0;i<n;i++){
    printf("%d %d\n",x[i]->data,*(x[i]->adr));
  }
  for(i=0;i<n-1;i++){
    for(j=i+1;j<n;j++){
      p3=p4=p5=p6=p7=p8=false;
      a1=x[i]->data;b1=*(x[i]->adr);
      a2=x[j]->data;b2=*(x[j]->adr);
      r=sqrt((b2-b1)*(b2-b1)+(a2-a1)*(a2-a1));
      if(a2!=a1){
	tan=(b2-b1)/(a2-a1);
	rcos=r*cos(atan(tan));
	rsin=r*sin(atan(tan));
      }
      else{
	rcos=0;
	rsin=r;
      }
      //      if(!(rcos/2==(int)rcos/2 && rsin/2==(int)rsin/2))
      //continue;
      
      a3=a2+rsin;b3=b2-rcos;
      a4=a1+rsin;b4=b1-rcos;

      a5=a2-rsin;b5=b2+rcos;
      a6=a1-rsin;b6=b1+rcos;

      ad1=a1+(rcos-rsin)/2;bd1=b1+(rcos+rsin)/2;
      ad2=a1+(rsin+rcos)/2;bd2=b1+(rsin-rcos)/2;
      printf("%d%d %d,%d:%d,%d\t%d,%d:%d,%d     \t%d,%d:%d,%d      \t%d,%d:%d,%d   \tdet %lf,%lf %lf\n",i,j,a1,b1,a2,b2,a3,b3,a4,b4,a5,b5,a6,b6,ad1,bd1,ad2,bd2,rcos,rsin,r);
      if((pos=bsearch(x,0,n,a3)+1) && *(x[--pos]->adr)==b3)
	p3=true;
      if((pos=bsearch(x,0,n,a4)+1) && *(x[--pos]->adr)==b4)
	p4=true;
      if((pos=bsearch(x,0,n,a5)+1) && *(x[--pos]->adr)==b5)
	p5=true;
      if((pos=bsearch(x,0,n,a6)+1) && *(x[--pos]->adr)==b6)
	p6=true;
      if((pos=bsearch(x,0,n,ad1)+1) && *(x[--pos]->adr)==bd1)
	p7=true;
      if((pos=bsearch(x,0,n,ad2)+1) && *(x[--pos]->adr)==bd2)
	p8=true;
      if((p3 && p4) || (p5 && p6) || (p7 && p8)){
	ans=0;
	//break;
      }
      else if(((p3||p4) || (p5||p6) || (p7||p8))){
	ans=1;
      }
    }
    //if(ans==0)
    //break;
  }
  printf("%d\n",ans);
  return 0;
}
