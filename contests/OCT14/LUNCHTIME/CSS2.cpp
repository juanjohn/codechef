#include <iostream>
#include <stdio.h>

using namespace std;

struct node{
  int id;
  int attr;
  int val;
  int priority;
  node *next=NULL;
};

node *head;
int cnt=0;
int main(){
  int n,m,i;
  node *temp;
  scanf("%d%d",&n,&m);
  node *arr[n];
  //insert(arr,n);
  bool assigned;
  while(n--){
    assigned=false;
    node *ptr=new node;
    scanf("%d%d%d%d",(ptr->id),(ptr->attr),(ptr->val),(ptr->priority));
    for(i=0;i<n && i<cnt;i++){
      if(arr[i]->id==ptr->id){
	temp=arr[i];
	while(temp->next!=NULL){
	  if(temp->attr==ptr->attr){
	    if(temp->priority<=ptr->priority){
	      temp->val=ptr->val;
	    }
	    assigned=true;
	  }
	  temp=temp->next;
	}
	if(temp->next==NULL && !assigned){
	  temp->next=ptr;
	  assigned=true;
	}
	break;
      }
    }
    if(!assigned){
      arr[i]=ptr;
      cnt++;
    }
  }


  while(m--){
    int a;
    scanf("%d%d",&i,&a);
    for(int j=0;j<n && arr[j]!=NULL;j++){
      if(arr[j]->id==i){
	temp=arr[j];
	while(temp->next!=NULL){
	  if(temp->attr==a)
	    cout<<temp->val<<endl;
	  temp=temp->next;
	}
      }
    }
    
  }
  return 0;
}
