//M-1
// s 
// num1 
// nume2 
// num1 ->s 
// s is unique and sorted 
// s elements compare num2 ( s.count(num2 element))
// ans array 
// class Solution {
// public:
//     vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//     set<int>s1(nums1.begin(), nums1.end());
//     set<int>s2(nums2.begin(), nums2.end());
//     vector<int> ans;
//         for(int x : s1){
//             if(s2.count(x)){
//                 ans.push_back(x);
//             }
//         }
//         return ans;
//     }
// };


//M-2
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        // 1. Put nums1 into a hash set for fast lookups
        unordered_set<int> s1(nums1.begin(), nums1.end());
        unordered_set<int> result_set; // To avoid duplicate results
        
        // 2. Iterate through nums2 and check if the element is in s1
        for (int x : nums2) {
            if (s1.count(x)) { // This works perfectly on a set!
                result_set.insert(x);
            }
        }
        
        // 3. Convert the result set back into a vector
        return vector<int>(result_set.begin(), result_set.end());
    }
};