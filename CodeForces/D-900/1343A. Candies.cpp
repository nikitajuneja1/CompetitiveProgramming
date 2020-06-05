#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int num,n,sum, x;
	cin>>num;
	for(int i=0; i<num; i++){
	   sum=1;
	   cin>>n;
	   for(int k=1;;k++){
	       sum += pow(2,k);
	       if(n%sum==0){
	           x = n/sum;
	           cout<<x<<endl;
	           break;
	       }
	   }
	}
	return 0;
}
