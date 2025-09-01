#include <cctype>
class Solution {
public:
    bool isPalindrome(string str) {
        string s;
        for (char c : str) {
            if (isalnum(c)) s += tolower(c);
        }
        int n = s.length();
        int i = 0, j = n-1;
        while(i<=j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
