class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int window = 0;
        // Created first window sum
        for(int i=0; i<k; i++)
            window += arr[i];
            
        int maxSum = window;
        for(int i=k; i<arr.size(); i++){
            /* Update window -
               Add next elem and subtract last */
            window += arr[i]-arr[i-k];
            maxSum = max(maxSum, window);
        }
        return maxSum;
    }
};
