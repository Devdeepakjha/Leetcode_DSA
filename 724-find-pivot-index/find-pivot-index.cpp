// //we need to find an index(this index is non-inclusive in sum) from where uptill 0th index sum and uptill last index sum is equal

// class Solution {
// public:
//     int pivotIndex(vector<int>& nums) {
//         int n = nums.size();
//         vector<int> prefix_sum(n);
//         vector<int> suffix_sum(n);
//         prefix_sum[0] = nums[0];
//         suffix_sum[n-1] = nums[n-1];
//         for(int i = 1; i<n; i++){
//             prefix_sum[i] = prefix_sum[i - 1] + nums[i];  //from here we can remove addition of nums[i] as the pivot index val is non-inclusive, but as i am adding on both side so nothing changes
//         }
//         for(int i = n-2; i>=0; i--){
//             suffix_sum[i] = suffix_sum[i+1] + nums[i];   //from here we can remove addition of nums[i] as the pivot index val is non-inclusive, but as i am adding on both side so nothing changes
//         }
//         }
//         for(int i = 0; i<n; i++){
//             if(prefix_sum[i] == suffix_sum[i]) return i;
//         }
//     return -1;
//     }
// };


//optimal
//another way not string the complete prefix_sum array and suffix_array directly compaaring values storing in an variable for each i 
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0;
        int left_sum = 0;
        
        // 1. Calculate the total sum of all elements
        for (int num : nums) {
            total_sum += num;
        }
        
        // 2. Walk through each index and check the balance
        for (int i = 0; i < nums.size(); i++) {
            // Calculate right sum on the fly
            int right_sum = total_sum - left_sum - nums[i];
            
            // Check if both sides are equal
            if (left_sum == right_sum) {
                return i;
            }
            
            // Add current number to left sum before moving to next index
            left_sum += nums[i];
        }
        
        return -1;
    }
};
