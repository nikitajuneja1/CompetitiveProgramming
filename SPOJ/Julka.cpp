#include <iostream>
#include <boost/multiprecision/cpp_int.hpp>
using namespace std;
using namespace boost::multiprecision;
 
int main() {
	int a1 = 1, a2 = 1, b1 = 1, b2 = -1;
	cpp_int c1, c2, x, y;
	int t = 10;
	while(t){
	    cin>>c1;
	    cin>>c2;
	    c1 = -c1;
	    c2 = -c2;
	    x = (b1*c2 - c1*b2)/(a1*b2 - a2*b1);
	    y = (c1*a2 - c2*a1)/(a1*b2 - a2*b1);
	   // cout<<"x: "<<x<<" "<<"y: "<<y<<endl;
	   cout<<x<<endl<<y<<endl;
	    t--;
	}
	return 0;
}
