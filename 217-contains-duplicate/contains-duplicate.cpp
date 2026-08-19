class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int x : nums) freq[x]++;
        for(auto p : freq){
            if(p.second >= 2){
                return true;
                break;
            }
        }
    return false;
    }
};