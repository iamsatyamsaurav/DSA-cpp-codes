class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        
        // Traverse the digits from the end to the start
        for(int i = n - 1; i >= 0; i--) {
            if(digits[i] < 9) {
                digits[i]++; // If the digit is less than 9, increment it
                return digits; // No need to propagate the carry
            }
            digits[i] = 0; // If the digit is 9, set it to 0 and continue to the next digit
        }
        
        // If all digits were 9, we need to add an additional 1 at the start
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
