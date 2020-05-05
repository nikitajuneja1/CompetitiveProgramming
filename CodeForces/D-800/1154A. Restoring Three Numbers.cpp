#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[4];
    int i, a, b, c;
    for(i=0; i<4; i++){
        cin>>arr[i];
    }
    sort(arr, arr+4);
    a = arr[3] - arr[0];
    b = arr[2] - a;
    c = arr[1] - a;
    cout<<a<<" "<<b<<" "<<c;
    return 0;
}
