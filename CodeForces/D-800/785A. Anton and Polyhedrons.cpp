#include <iostream>
using namespace std;

int main() {
    int n, i;
    int sum = 0;
    cin>>n;
    string arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]=="Tetrahedron"){
            sum += 4;
        }
        if(arr[i]=="Cube"){
            sum += 6;
        }
        if(arr[i]=="Octahedron"){
            sum += 8;
        }
        if(arr[i]=="Dodecahedron"){
            sum += 12;
        }
        if(arr[i]=="Icosahedron"){
            sum += 20;
        }
    }
    cout<<sum;
    return 0;
}
