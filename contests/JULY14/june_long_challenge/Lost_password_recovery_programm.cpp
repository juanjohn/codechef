#include <iostream>
#include <string>

using namespace std;

int main(){
	int t;
	cin>>t;
	int n;
	char c[100],p[100];
	char string[1000000];
	for(int i=0;i<t;i++){
		cin>>n;
		for(int j=0;j<n;j++){
			cin>>c[j];
			cin>>p[j];
		}
		cin>>string;
		int k=0;
		while(string[k]!='\0')
			cout<<string[k]<<" ",k++;
	}
	return 0;
}
