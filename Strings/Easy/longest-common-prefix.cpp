class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) { 
        int n = strs.size();
        string ans = "";
        for(int i=0; i<strs[0].size(); i++) {
            char c = strs[0][i];
            for(int j=0; j<n; j++){
                if(strs[j].size()<i || c!=strs[j][i]) 
                    return ans;
            }
            ans += c;
        }
        return ans;
    }
};

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        string ans = "";
        sort(strs.begin(), strs.end());
        string a = strs[0], b = strs[n-1];
        for(int i=0; i<a.size(); i++){
            if(a[i]!=b[i]) return ans;
            else ans += a[i];
        }
        return ans;
    }
};

