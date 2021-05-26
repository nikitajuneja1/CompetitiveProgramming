class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i=digits.size()-1; i>=0; i--)
        {
            //first case
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            //if the last digit is 9
            if(digits[i]==9){
                digits[i] = 0;
            }
            //edge case if the number is of the form 9999
            if(digits[0]==0){
                digits.insert(digits.begin(),1);
            }
                
        }
        
        return digits;
    }
};
