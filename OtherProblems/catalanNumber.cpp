#include <iostream>
using namespace std;
//find nth catalan number
//using recursive method
int catalan(int n){
    int res=0;
    if(n<=1)
        return 1;
    for(int i=0; i<n; i++){
        res+= catalan(i)*catalan(n-i-1);
    }
    return res;
}
//Recursive method exponential time complexity

//using dynamic programming
int catalanDP(int n){
    int c[n];
    c[0] = c[1] = 1;
    for(int i=2; i<=n; i++){
        c[i] = 0;
        for(int j=0; j<i; j++){
            c[i] += c[j]*c[i-j-1]; //using the already calculated values
        }
    }
    return c[n];
}
//dynamic programming has O(n^2) time complexity and O(n) space complexity

//using binomial coefficients
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
//using binomial Coefficients the time complexity is O(n)
int main() {
	for(int i=0; i<=5; i++){
	   // printf("%d ", catalan(i));
	   // printf("%d ", catalanDP(i));
	    printf("%d ", catalanBinomial(i));
	}
	return 0;
}
