#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

bool isprime(int a){
	int cnt=0;
	for(int i=2;i<=floor(sqrt(a));i++){
		if(a%i==0)
			return false;
	}
	return true;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	int j=0;
	int primes[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(isprime(arr[i])){
			primes[j++]=arr[i];	
		}
	}
	int num=j*(j-1)*(j-2)/6;
	cout<<num<<endl;
	return 0;
}
