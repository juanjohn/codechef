#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int t;int n;int pie[40],w[40];int count=0;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>pie[i];
		}
		for(int i=0;i<n;i++){
			cin>>w[i];
		}
		sort(pie,pie+n);
		sort(w,w+n);
		int j=0;
		for(int i=0;i<n;i++){
			for(;j<n;j++){
			if(pie[i]<=w[j]){
				count++;
				j++;
				break;
			}
			}

		}
		cout<<count<<endl;
		count=0;
	}
	return 0;
}
