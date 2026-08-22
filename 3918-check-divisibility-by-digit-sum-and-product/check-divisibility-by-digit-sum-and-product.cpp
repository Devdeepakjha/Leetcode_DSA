class Solution {
public:
    bool checkDivisibility(int n) {
        int original_n = n;
        int sum = 0;
        int product = 1;
        while(n > 0){
            int ld = n % 10;
            sum += ld;
            product *= ld;
            n/=10;
        }
        // a simple safety check to prevent division with 0
        if(sum + product == 0) return false;
        //using original_n bcz after the while loop n becomes 0 and anything divided by 0 is 0
        if (original_n % (sum + product) == 0){
            return true;
        }
        return false;
    }
};