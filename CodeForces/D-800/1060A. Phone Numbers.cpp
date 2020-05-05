#include <iostream>
#include <array>
using namespace std;

int main() {
    int n, count=0;
    cin>>n;
    char arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int n1;
    n1 = n;
    for(int i=0; i<n; i++){
        if((n1>=11) && (arr[i]=='8') && (n1!=0)){
            n1 = n1-11;
            count++;
        }
    }
    cout<<count;
    return 0;
}

