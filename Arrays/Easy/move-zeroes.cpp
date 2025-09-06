class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0; i<n; i++) {
            if(nums[i] == 0) {
                count++;
            }
        }
        for (auto i = nums.begin(); i != nums.end(); ++i) {
            if (*i == 0) {
                nums.erase(i);
                i--;
            }
        }
        while(count>0) {
            nums.push_back(0);
            --count;
        }
    }
};
