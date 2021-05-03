/* Hackerearth Problem - Bishu and Soldiers
Problem
Bishu went to fight for Coding Club. There were N soldiers with various powers. There will be Q rounds to fight and in each round Bishu's power will be varied. With power M, Bishu can kill all the soldiers whose power is less than or equal to M(<=M). After each round, All the soldiers who are dead in previous round will reborn.Such that in each round there will be N soldiers to fight. As Bishu is weak in mathematics, help him to count the number of soldiers that he can kill in each round and total sum of their powers.

1<=N<=10000

1<=power of each soldier<=100

1<=Q<=10000

1<=power of bishu<=100
*/
#include<iostream>
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i=0; i<n; i++)
        cin>>arr[i];
    sort(arr, arr+n);
    ll q;
    cin>>q;
    while(q--){
        ll m, l, r, sum=0;
        cin>>m;
        l = -1, r = n;
        while(r>l+1){
            ll mid = l + (r-l)/2;
            if(arr[mid]>m)
                r = mid;
            else
                l = mid;
        }
        for(ll i =0; i<=l; i++){
            sum += arr[i];
        }
        cout<<l+1<<" "<<sum<<endl;
    }
}

