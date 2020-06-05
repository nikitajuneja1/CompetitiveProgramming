#include <iostream>
using namespace std;
 
int main() {
	long long int n, a, b, c, d, count=0, delt;
	cin>>n;
	for(int i=0; i<n; i++){
	    cin>>a>>b>>c>>d;
	    if(a-b>0 && d>=c){
	        cout<<"-1"<<endl;
	        continue;
	    }
	    if (a - b <= 0)
            cout << b << "\n";
            
        else{
            delt = c - d;
            count = (a - b + delt - 1) / delt;
            cout<<b + (count*c)<<endl;
        }
	}
	return 0;
}
