#include <iostream>

using namespace std;

int main(){
  int cols;
  while(true){
    cin>>cols;
    if(cols==0)
      break;
    else{
      char str[200];
      cin>>str;
      int len=0;
      for(int i=0;str[i]!='\0';i++){
	len++;
      }
      int rows=len/cols;
      for(int j=0;j<cols;j++){
	for(int i=0;i<rows;i++){
	  if(i%2==0)
	    cout<<str[i*cols+j];
	  else
	    cout<<str[i*cols+cols-j-1];
	}
      }
      cout<<endl;
    }
  }
  return 0;
}
