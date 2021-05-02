#include<iostream>
#include <cmath>

#define mod 1000000007
using namespace std;
long long int gcd(long long int a,long long int b)
{
if(b==0)
return a;
else
return gcd(b,a%b);
}

int main() {
long long int n,sum;
cin >> n;
sum = (n/2 + n/3 + n/11 + n/13) - (n/6 + n/22 + n/26 + n/33 + n/39 + n/143) + (n/66 + n/78 + n/286 + n/429) - (n/858);
long long int q=gcd(n,sum);

cout<<sum/q<<" "<<n/q;

}
