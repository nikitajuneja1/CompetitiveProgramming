#include <iostream>
using namespace std;

int main() {
	int num,n,a,b,c,d;
	cin>>num;
	for(int i=0; i<num; i++){
	    cin>>n>>a>>b>>c>>d;
	    if ((n * (a + b) >= c - d)&&(n * (a - b) <= c + d))
	        cout << "Yes\n";
	    else
		    cout << "No\n";
	}
	return 0;
}
