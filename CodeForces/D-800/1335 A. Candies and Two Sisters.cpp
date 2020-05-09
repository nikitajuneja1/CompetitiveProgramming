#include <iostream>
using namespace std;

int main() {
	int n, count=0;
	int a=0, b=0;
	scanf("%d", &n);
	int num;
	for(int i=0; i<n; i++){
	    count=0;
	    cin>>num;
	    a=num-1;
	    b=num-a;
	    while(a!=num/2){
	        a--;
	        b=num-a;
	        count++;
	    }
	    printf("%d \n", count);
	}
	return 0;
}