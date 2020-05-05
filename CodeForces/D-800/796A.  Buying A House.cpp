#include <iostream>
#include <vector>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k, min;
    cin>>n>>m>>k;
    int arr[n];
    vector< int > array;
    vector< int > diff;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    for(int i=1; i<=n; i++){
        if(arr[i]!=0 && arr[i]<=k){
            {
                array.push_back(i);
            }
        }
    }
    for(int i=0; i!=array.size(); ++i){
        diff.push_back(abs(m-array[i]));
    }
    min = *min_element(diff.begin(), diff.end());
    cout<<10*min;
    return 0;
}
