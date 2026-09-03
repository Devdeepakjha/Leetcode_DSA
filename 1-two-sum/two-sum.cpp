
//BRUTEFORCE
// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {  
//         for(int i = 0; i<nums.size(); i++){
//             for(int j = i + 1; j<nums.size(); j++){
//                 if(nums[i] + nums[j] == target)
//                 return {i,j};
//             }
//         }
//         return {}; //returning a empty vector if nothing above worked!(remember)
//     }
// };

//OPTIMAL
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp;
        for(int i=0; i<nums.size(); i++){
            int need = target - nums[i];
            if(mp.find(need) != mp.end()){ //checking for out of bound thing...
                return {mp[need], i};
            }
            mp[nums[i]] = i;  //seeting value for each key(as there index, to keep check of index also)
        }
        return {}; //returning a empty vector
    }
};

//so this map has for each, in each row
// key(nums[i]) and value(index of nums[i] i.e. i)