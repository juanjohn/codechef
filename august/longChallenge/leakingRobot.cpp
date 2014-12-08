#include <iostream>

using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    long long x,y;
    int flag=0;
    cin>>x>>y;
    if((x>=0 && x%2==1)||(x<=0 && x%2==0)){
      if(x<=0 && x%2==0){
	if(y<=(0-x) && y>=x)
	  flag=1;//cout<<"YES"<<endl;
	//else
	  //cout<<"NO"<<endl;
	//continue;
      }
      else if(x>0 && (x-1)%2==0){
	if(y<=x+1 && y>=1-x)
	  flag=1;//cout<<"YES"<<endl;
	//else
	//cout<<"NO"<<endl;
	//continue;
      }
      else{
	//cout<<"NO"<<endl;
	//continue;
      }
    }
    if((y%2==0)){
      if(y>=0){
	if(x<=y-1 && x>=(0-y))
	  flag=1;//cout<<"YES"<<endl;
	//else
	//cout<<"NO"<<endl;
	//continue;
      }
      else if(y<=0){
	if(x>=y && x<=(0-y+1))
	  flag=1;//cout<<"YES"<<endl;
	//else
	  //cout<<"NO"<<endl;
	  //continue;
      }
      else{
	//cout<<"NO"<<endl;
	//continue;
      }
    }
    else{}
      //cout<<"NO"<<endl;
    if(flag==1)
      cout<<"YES"<<endl;
    else
      cout<<"NO"<<endl;
  }
  return 0;
}
