//Add two integer values without using the "+" operator
class Solution {
public:
    int getSum(int a, int b) {
        while(b){
            int carry = a&b;
            a = a^b;
            b = (unsigned)carry<<1;
            
        }
    }
};
