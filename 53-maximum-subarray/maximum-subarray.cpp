//Bruteforce -> tle
// class Solution {
// public:
//     int maxSubArray(vector<int>& nums) {
//         int n = nums.size();
//         int max_sum = INT_MIN;
//         for (int i = 0; i < n; i++){
//             int sum = 0;
//             for (int j = i; j <n; j++){
//                 sum += nums[j];
//                 if(sum > max_sum){
//                     max_sum = sum;
//                 }
//             }
//         }
//         return max_sum;
//     }
// };

//kadane's :)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int curr_sum = 0;
        int max_sum = INT_MIN;
        for (int i = 0; i < n; i++){
            curr_sum += nums[i];
            max_sum = max(curr_sum, max_sum);
            if(curr_sum<0) curr_sum = 0;
        }
        return max_sum;
    }
};