class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int, int> maps;
        for(auto x: nums)
            maps[x]++;
        for(auto x: maps) {
            if (x.second >= 2) {
                return x.first;
            }
        }
        return 0;
    }
};
