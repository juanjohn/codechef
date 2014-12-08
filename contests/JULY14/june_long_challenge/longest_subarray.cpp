#include <iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n+2];
	arr[0]=0;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	arr[n+1]=0;
	int maxLength=0,tempLength=0;
	for(int i=0;i<n+2;i++){
		if(arr[i]==0){
			if(tempLength>maxLength){
				maxLength=tempLength;
			}
			tempLength=0;
		}
		else{
			tempLength++;
		}
	}
	cout<<maxLength;
	return 0;
}
