#include <iostream>
using namespace std;
/*
sample input:
2 (no. of test cases)
5
6
output:
0
5
*/
int binomialCoefficients(int n, int k){
    int res = 1;
    if(k>n-k)
        k = n-k;
    for (int i = 0; i < k; ++i) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}
int catalanBinomial(int n){
    int c = binomialCoefficients(2*n,n);
    return c/(n+1);
}

int main() {
	int t, n, res=0;
	scanf("%d", &t);
	while(t-->0){
	   scanf("%d", &n);
	   if(n%2==0){
	       res = catalanBinomial(n/2);
	   }
	   printf("%d \n", res);
	}
	return 0;
}
