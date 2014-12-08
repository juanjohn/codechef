#include <iostream>

using namespace std;

long int gcd(long int a,long int b){
	if(b==0l)
		return a;
	else
		return gcd(b,a%b);
}

void findp(long int a,long int b){
	long int p1,p2,p3,p4;
	if(a%2l==0l)
		p1=a/2l,p3=a/2l;
	else
		p1=(a+1l)/2l,p3=(a-1l)/2l;
	if(b%2l==0l)
		p2=(b)/2l,p4=(b)/2l;
	else
		p2=(b)/2l,p4=(b+1l)/2l;
	long int num=p1*p2+p3*p4;
	long int total=a*b;
	long int g=gcd(num,total);
	num=num/g;
	total=total/g;
	cout<<num<<'/'<<total<<endl;
	return;
}

int main(){
	long int t;
	cin>>t;
	long int a[t];
	long int b[t];
	for(long int i=0;i<t;i++){
		cin>>a[i]>>b[i];
	}
	for(long int i=0;i<t;i++){
		findp(a[i],b[i]);
	}
	return 0;
}
