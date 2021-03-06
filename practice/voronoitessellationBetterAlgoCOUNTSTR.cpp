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
  int r,c,i,j;
  scanf("%d",&r);
  scanf("%d",&c);
  int arr[r][c];
  for(i=0;i<r;i++)
    for(j=0;j<c;j++)
      inp(&arr[i][j]);
  int t;
  scanf("%d",&t);

  int lkp[r][c];int sumc=arr[0][0],sumr=arr[0][0];
  for(i=0;i<r;i++){
    lkp[i][0]=sumr;
    sumr+=arr[i+1][0];
  }
  for(i=0;i<c;i++){
    lkp[0][i]=sumc;
    sumc+=arr[0][i+1];
  }
  for(i=1;i<r;i++)
    for(j=1;j<c;j++){
      lkp[i][j]=lkp[i-1][j]+lkp[i][j-1]-lkp[i-1][j-1]+arr[i][j];
    }
  /*
  for(int i=0;i<r;i++){
    for(int j=0;j<c;j++)
      printf("%d ",lkp[i][j]);
    printf("\n");
    }*/
  
  while(t--){
    int a,b,c,d;
    inp(&a);
    inp(&b);
    inp(&c);
    inp(&d);
    a--;
    b--;
    c--;
    d--;
    int t1,t2,t3;
    if(a==0)
      t1=0;
    else
      t1=lkp[a-1][d];
    if(b==0)
      t2=0;
    else
      t2=lkp[c][b-1];
    if(a==0 || b==0)
      t3=0;
    else
      t3=lkp[a-1][b-1];
    int ans=lkp[c][d]-t1-t2+t3;
    printf("%d\n",ans);
    //printf("%d %d %d %d %d\n",ans,lkp[c][d],t1,t2,t3);
  }
  
  return 0;
}
