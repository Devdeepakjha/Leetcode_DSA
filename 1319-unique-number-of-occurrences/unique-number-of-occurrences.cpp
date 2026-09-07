class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for(int x : arr){
            freq[x]++;
        }
        unordered_set<int> uniquefreq;
        for(auto x : freq){
            uniquefreq.insert(x.second);
        }

        return freq.size() == uniquefreq.size(); // if size is not same then all occurences are not unique
    }
};