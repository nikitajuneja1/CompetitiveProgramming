#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n,ans=0;
    vector<int> bills;
    bills.push_back(1);
    bills.push_back(5);
    bills.push_back(10);
    bills.push_back(20);
    bills.push_back(100);
    cin>>n;
    
    while(!bills.empty()){
        if(n>=bills[bills.size()-1]){
            ans+=n/(bills[bills.size()-1]);
            n=n%(bills[bills.size()-1]);
            bills.pop_back();
        }
        else{
            bills.pop_back();
        }
        
    }
    
    cout<<ans;
}
