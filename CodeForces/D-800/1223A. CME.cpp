#include<iostream>
using namespace std;
int main(){
    
    int t, n, m;
    cin>>t;
    for(int i=0; i<t;i++){
        cin>>n;
        m=n;
        if(m==1||m==2){
            cout<<"2"<<endl;
            continue;
        }
        else if(m%2!=0){
            m=m+1;
        }
        m=m/2;
        n=n-m;
        cout<<m-n<<endl;
    }
    return 0;
}
