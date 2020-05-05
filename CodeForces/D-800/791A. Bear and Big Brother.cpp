#include <iostream>
using namespace std;

int main() {
    int w1, w2, years=0;
    cin>>w1>>w2;
    while(w1<=w2){
        w1 *= 3;
        w2 *= 2;
        years++;
    }
    cout<<years;
    return 0;
}
