#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#include<vector>
 
#define ll long long
#define MOD 1000000007
#define REP(i, n) FOR(i, 0, (int)n - 1)
#define FOR(i, a, b) for (int i = a; i < b; ++i)
 
using namespace std;
 
int const N = 2501;
int n, a[N], b[N], c[N], d[N];
vector<int> v;
 
int main(){
    scanf("%d", &n);
    FOR(i, 0, n){
        scanf("%d %d %d %d", a+i, b+i, c+i, d+i);
    }
    FOR(i, 0, n){
        FOR(j, 0, n){
            v.push_back(a[i]+b[j]);
        }
    }
    sort(v.begin(), v.end());
    pair<vector<int>::iterator, vector<int>::iterator> bounds;
    int res = 0;
	for(int i = 0; i < n; ++i)
		for(int j = 0; j < n; ++j) {
			int tmp = -(c[i] + d[j]);
			bounds = equal_range(v.begin(), v.end(), tmp);
			res += bounds.second - bounds.first;
		}
 
	printf("%d\n", res);
 
    return 0;
} 
