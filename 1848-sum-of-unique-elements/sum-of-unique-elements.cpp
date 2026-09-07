class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int x : nums){
            mp[x]++;
        }
        int ans = 0;
        for(auto x : mp){
            if(x.second == 1){
                ans += x.first;
            }
        }
        return ans;
    }
};