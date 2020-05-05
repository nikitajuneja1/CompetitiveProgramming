#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int arr[n][2];
    for(int i=0; i<n; i++){
        for(int j=0; j<2; j++){
            scanf("%d", &arr[i][j]);
        }
        if(arr[i][0]%arr[i][1]==0){
            printf("0 \n");
        }
        else{
            if(arr[i][0]>arr[i][1]){
                int rem, ans;
                rem = arr[i][0]%arr[i][1];
                ans = arr[i][1] - rem;
                printf("%d \n", ans);
            }
            else{
                printf("%d \n", arr[i][1]-arr[i][0]);
            }
        }
    }
    return 0;
}
