#include <iostream>
using namespace std;

int main() {
	long long int n;
	cin>>n;
	if((n+1)%2==0){
	    cout<<(n+1)/2;
	}
	else if(n==0){
	    cout<<"0";
	}
	else{
	    cout<<n+1;
	}
	return 0;
}
