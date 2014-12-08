#include <iostream>

using namespace std;

struct node{
  int data;
  node *next;
};
node *head=new node;
node *start=new node;
node *end=new node;
node *temp=new node;

void sort ()
{
  int count = 0, i;
  start = head;
  node *curr = NULL;
  node *trail = NULL;
  temp = NULL;

  while(start != NULL) { 
    count++;
    start = start->next;
  }

  for(i = 0; i<count; ++i) { 

    curr = trail = head; 

    while (curr->next != NULL) { 
      if (curr->data > curr->next->data) { 

	temp = curr->next; 
	curr->next = curr->next->next;
	temp->next = curr;

	if(curr == head)
	  head = trail = temp;
	else
	  trail->next = temp;
	curr = temp;
      }
      
      trail = curr;
      curr = curr->next;
    }
  }
}

void swap(int *a,int *b){
  *a=*a^*b;
  *b=*a^*b;
  *a=*a^*b;
}

int main(){
  int n,k,p;int a,b;
  cin>>n>>k>>p;
  node *pos[n];

  pos[0]=head;
  cin>>head->data;
  head->next=NULL;
  for(int i=1;i<n;i++){
    node *ptr=new node;
    cin>>ptr->data;
    ptr->next=NULL;
    pos[i-1]->next=ptr;
    pos[i]=ptr;
  }
  sort();
  //node *temp=head;
  //for(int i=0;i<n;i++){
    //    cout<<temp->data<<endl;
    //temp=temp->next;
  // }
  for(int i=0;i<p;i++){
    cin>>a>>b;
    if(b<a)
      swap(&a,&b);
    if(a<1 || b>n){
      cout<<"No"<<endl;
      continue;
    }    
    start=pos[a-1];
    end=pos[b-1];
    temp=start;
    while(temp->next!=end->next){
      if(temp->next->data-temp->data<=k){
	temp=temp->next;
      }
      else
	break;
    }
    if(temp->next==end->next){
      cout<<"Yes"<<endl;
    }
    else
      cout<<"No"<<endl; 
  }
  return 0;
}
