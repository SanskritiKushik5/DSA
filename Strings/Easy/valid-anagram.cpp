class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if(s==t) return true;
        return false;
    }
};

class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int, int>maps;
        unordered_map<int, int>mapt;
        for(char c:s) maps[c]++;
        for(char c:t) mapt[c]++;
        if(maps == mapt) return true;
        return false;
    }
};
