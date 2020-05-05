#include <iostream>
using namespace std;

int main() {
    int n,i,num=0;
    cin>>n;
    string tour;
    cin>>tour;
    for(i=0;i<n-1;i++){
        if(tour[i]=='S' && tour[i+1]=='F')
            num++;
        if(tour[i]=='F' && tour[i+1]=='S')
            num--;
    }
    if(num>0){
        cout<<"YES";
    }
    else
        cout<<"NO";
    return 0;
}
