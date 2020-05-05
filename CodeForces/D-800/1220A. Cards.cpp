#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n, i, numofn=0, numofz=0, a, diff=0;
    cin>>n;
    char str[n];
    for(i=0;i<n;i++){
        cin>>str[i];
    }
    sort(str, str+n);
    for(i=0;i<n;i++){
        if(str[i]=='n'){
            numofn++;
        }
        if(str[i]=='z'){
            numofz++;
        }
    }
    while(numofn>0){
        cout<<"1"<<" ";
        numofn--;
    }
    while(numofz>0){
        cout<<"0"<<" ";
        numofz--;
    }
    return 0;
}
