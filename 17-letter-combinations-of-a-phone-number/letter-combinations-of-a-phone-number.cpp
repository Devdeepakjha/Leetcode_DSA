
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) return {};

        vector<string> letters = {
            "", "", "abc", "def", "ghi", "jkl",
            "mno", "pqrs", "tuv", "wxyz"
        };

        vector<string> ans = {""};

        for (char digit : digits) {
            vector<string> temp;

            // Add each possible letter to existing combinations
            for (string s : ans) {
                for (char ch : letters[digit - '0']) {
                    temp.push_back(s + ch);
                }
            }

            ans = temp;
        }

        return ans;
    }
};
