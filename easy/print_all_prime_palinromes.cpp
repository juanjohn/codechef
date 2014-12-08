#include <iostream>
#include <math.h>
#include <string>
#include <stdlib.h>

using namespace std;

bool isprime(int n){
	for(int i=2;i<floor(sqrt(n));i++){
		if(n%i==0)
			return false;
	}
	return true;

}

bool ispalindrome(int n){
	char k[10];
	sprintf(k,"%d",n);
	int i=0;
	while(k[i++]!='\0'){
		cout<<k[i];
	}
	return false;
}

int main(){
	for(int i=1;i<1000000;i+=2){
		if(isprime(i) && ispalindrome(i)){
			cout<<i<<", ";
		}
	}
	return 0;
}
