class Solution {
public:
    int addDigits(int num) {
        // Keep looping until num becomes a single digit (less than 10)
        while (num >= 10) {
            int sum = 0;
            
            // Extract and sum all digits of the current 'num'
            while (num > 0) {
                sum = sum + num % 10;
                num /= 10;
            }
            
            // Update num with the new sum for the next pass
            num = sum;
        }
        
        return num;
    }
};
