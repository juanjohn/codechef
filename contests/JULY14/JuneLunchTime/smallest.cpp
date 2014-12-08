#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t,n;
	cin>>t;
	int ans[t];
	int arr[100000];
	for(int i=0;i<t;i++){
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>arr[j];
		}
		sort(arr,arr+n);
		ans[i]=arr[0]+arr[1];
	}
	for(int j=0;j<t;j++){
		cout<<ans[j]<<endl;
	}
	return 0;
}
