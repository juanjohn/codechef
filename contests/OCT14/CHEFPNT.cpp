#include <bits/stdc++.h>

using namespace std;

struct node{
  int x;
  int y;
  node *next;
};
node *head;
node *tail;

int main(){
  int n,m,k,i,j,t,p,q,cnt=0;
  cin>>n>>m>>k;
  char arr[n][m];
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      arr[i][j]='w';
  for(i=0;i<k;i++){
    cin>>p>>q;
    arr[p-1][q-1]='b';
  }
  //head=tail=NULL;
  for(i=0;i<n;i++){
    if(arr[i][0]=='w'){
      cnt++;
      node *ptr=new node;
      ptr->x=i;
      ptr->y=0;
      //      cout<<i<<0<<"0o"<<endl;
      ptr->next=NULL;
      if(head==NULL){
	head=ptr;
	tail=ptr;
      }
      else{
	tail->next=ptr;
	tail=tail->next;
      }
    }
    for(j=0;j<m-1;j++){
      if(arr[i][j]=='b' && arr[i][j+1]=='w'){
	cnt++;
	node *ptr=new node;
	ptr->x=i;
	ptr->y=j+1;
	//cout<<i<<j+1<<"0i"<<endl;
	ptr->next=NULL;
	if(head==NULL){
	  head=ptr;
	  tail=ptr;
	}
	else{
	  tail->next=ptr;
	  tail=tail->next;
	}
      }
    }
  }
  node *temp=head;
  printf("%d\n",cnt);
  while(temp->next!=NULL){
    printf("%d %d %d\n",temp->x+1,temp->y+1,0);
    temp=temp->next;
  }
  printf("%d %d %d\n",temp->x+1,temp->y+1,0);

  
  /*  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      printf("%c ",arr[i][j]);
    }
    printf("\n");
    }*/
  return 0;
}
