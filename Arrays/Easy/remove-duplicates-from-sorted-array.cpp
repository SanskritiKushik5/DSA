class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> maps;
        for(auto x: nums)
            maps[x]++;
        nums.clear();
        for(auto x: maps)
            nums.push_back(x.first);
        sort(nums.begin(), nums.end());
        return nums.size();
    }
};
