#include <iostream>
#include <string>
using namespace std;

int main() {
    char table[2];
    string arr[5];
    int i, n=0;
    for(i=0;i<2;i++){
        cin>>table[i];
    }
    for(i=0;i<5;i++){
        cin>>arr[i];
        size_t found = arr[i].find(table[0]);
        size_t found1 = arr[i].find(table[1]);
        if(found!=string::npos || found1!=string::npos){
            n++;
        }
    }
    if(n>0)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
