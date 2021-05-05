//Application of binary search 
#include <iostream>
#include<bits/stdc++.h>
 
#define ll long long
#define MOD 1000000007
using namespace std;
 
int n,lo,hi;
long long res=0LL;
vector<int>s1,s2;
 
void findSextuples(int x[], int n){
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            for (int k=0;k<n;k++)
            {
                s1.push_back(x[i]*x[j]+x[k]);
            }
        }
    }
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            for (int k=0;k<n;k++)
            {
                if (x[k]==0) continue;
                s2.push_back((x[i]+x[j])*x[k]);
            }
        }
    }
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for (int i=0;i<s1.size();i++)
    {
        lo=lower_bound(s2.begin(),s2.end(),s1[i])-s2.begin();
        hi=upper_bound(s2.begin(),s2.end(),s1[i])-s2.begin();
        res+=(hi-lo);
    }
    printf("%lld\n",res);
}
int main()
{
    scanf("%d",&n);
    int x[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    findSextuples(x,n);
    
    
    return 0;
} 
