class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total_sum = 0;
        int left_sum = 0;
        int right_sum = 0;
        for(int x : nums){
            total_sum = total_sum + x;
        }

        for(int i = 0; i< nums.size(); i++){
            // the sequence is abnormal bcz of timing, if i write in normal way there will be runtime error(out of bound) see the commene code
            // left_sum += nums[i];
            // right_sum = total_sum - left_sum;
            // if(left_sum == right_sum) return i;
            // to perfect the timig like to use leftsum upto i-1 we will use the last claculated leftsum with current rightsum as we can remove nums[i] from right sum but can't from leftsum(out of bound error), remember the middleindex i is non-inclusive therefore this much thinking...
            right_sum = total_sum - left_sum - nums[i];
            if(left_sum == right_sum) return i;
            left_sum += nums[i];
        }
        return -1;
    }
};