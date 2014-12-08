#include <stdio.h>

void swapf(float *a,float *b){
  int temp=*a;
  *a=*b;
  *b=temp;
  return;
}

int main(){
  int n;
  scanf("%d",&n);
  float W;
  scanf("%d",&W);
  float cst[n],wgt[n];float den[n];int i,j;
  for(i=0;i<n;i++){
    scanf("%d",&wgt[i]);
    scanf("%d",&cst[i]);
    den[i]=cst[i]/wgt[i];
  }
  for(i=1;i<n;i++){
    for(j=i;j>=0;j--){
      if(den[j]>den[j-1])
	break;
      else{
	swapf(&den[j],&den[j-1]);
	swapf(&cst[j],&cst[j-1]);
	swapf(&wgt[j],&wgt[j-1]);
      }
    }
  }

  float w=W;float c=0;i=n-1;
  while(wgt[i]<w && i>=0){
    c+=cst[i];
    w-=wgt[i--];
  }
  c+=den[i]*w;

  printf("%f\n",c);
  
  return 0;
}
