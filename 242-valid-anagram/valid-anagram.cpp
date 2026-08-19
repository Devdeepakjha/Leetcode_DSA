class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> freq1;
        for (char c : s) freq1[c]++;
        unordered_map<char, int> freq2;
        for (char c : t) freq2[c]++;
        if(freq1 == freq2) return true; // simply comparing both the hashtables!
        return false;
    }
};