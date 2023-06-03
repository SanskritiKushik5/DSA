class Solution {
public:
    void sortColors(vector<int>& nums) {
        int minindex=0;
        int n = nums.size();
        for (int i=0; i<n-1; i++) {
            minindex = i;
            for(int j=i+1; j<n; j++) {
                if (nums[j] < nums[minindex])
                    minindex = j;
            }
            if (minindex != i)
                swap(nums[minindex], nums[i]);
        }
    }
};
