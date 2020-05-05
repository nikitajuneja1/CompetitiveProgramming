#include <iostream>
#include <string.h>
using namespace std;

int main() {
    int n, i;
    string final, final1;
    cin>>n;
    for(i=1; i<=n; i++){
        if(i%2!=0){
            final = final + " I hate";
        }
        else
        {
            if(i==n){
                final = final +" that"+ " I love";}
            else{
                final = final +" that"+ " I love that";
            }
        }
    }
    cout<<final<<" it";
    return 0;
}
