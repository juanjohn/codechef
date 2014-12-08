#include <iostream>
#include <cmath>

using namespace std;

int main(){
  int n;
  cin>>n;
  char cch,pch;
  int cvote,pvote;
  int cscore,pscore;
  cin>>pch>>pscore;
  pvote=(pch=='P')?1:-1;
  int minusers=abs(pscore)-1;
  for(int i=0;i<n;i++){
    cin>>cch>>cscore;
    cvote=(cch=='P')?1:-1;
    if((pscore<=0 && cscore=>0) || (pscore>=0 && cscore<=0)){
      if(cvote==pvote){
	if(cvote==1){
	  
	}
      }
      else{
	
      }
    }
    else{
      if(pvote==cvote){
	
      }
      else{
	
      }
    }
  }
  return 0;
}
