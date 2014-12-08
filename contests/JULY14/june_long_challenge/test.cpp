#include <iostream>

using namespace std;

int main(){
	long int x=~0l & ~(1l<<63);
	cout<<x<<endl;
	return 0;
}
