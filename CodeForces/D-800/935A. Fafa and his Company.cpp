#include <iostream>
using namespace std;

int main() {
    int n,i;
    int ways=0;
    cin>>n;
    for(i=1; i<=n/2; i++){
        if(n%i==0){
            ways++;
        }
    }
    cout<<ways;
    return 0;
}
