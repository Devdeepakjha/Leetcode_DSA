class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;
        for(char x : s){
            freq[x]++;
        }
        for(int i=0; i<s.size(); i++){
            if(freq[s[i]] == 1){ // not checking for freq[i] only bcz i have not created hashmap for that i, I have made as per the s[i] so passing that to check the frequency...
                return i;
                break;
            }
        }
        return -1;
    }
};