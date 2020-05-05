#include <iostream>
using namespace std;

int main() {
    int n, m, k;
    cin>>n>>m>>k;
    while(m>0 && k>0){
        n--;
        m--;
        k--;
    }
    if(n>0){
        cout<<"No";
    }
    else
    {
        cout<<"Yes";
    }
    return 0;
}
