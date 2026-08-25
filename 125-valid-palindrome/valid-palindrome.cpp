class Solution {
public:
    bool isPalindrome(string s) {
        string temp = "";

        for(char c : s) {
            if(isalnum(c)) { //returns true for normal chars, else false!
                temp += tolower(c); // if satisfies above then convert to lower case
            }
        }
        //temp is cleaned version, but i can't check temp wit original string as it will be different only na...
        //so, checking with reverse of temp only for palindrome thing!
        string rev = temp;
        reverse(temp.begin(), temp.end());
        if(rev == temp) return true;
        return false;

    }
};