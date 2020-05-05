#include <iostream>
using namespace std;

int main() {
    int n, s;
    int count = 0;
    cin>>n>>s;
    while(s>0){
        s = s-n;
        count++;
    }
    cout<<count;
    return 0;
}

