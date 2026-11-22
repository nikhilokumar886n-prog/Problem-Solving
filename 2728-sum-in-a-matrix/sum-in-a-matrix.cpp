class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int m = nums.size();
        int n = nums[0].size();

        for(auto &row : nums) {
            sort(row.begin(), row.end());
        }

        int ans = 0;

        for(int j = 0; j < n; j++) {
            int maxi = 0;

            for(int i = 0; i < m; i++) {
                maxi = max(maxi, nums[i][j]);
            }

            ans += maxi;
        }

        return ans;
    }
};