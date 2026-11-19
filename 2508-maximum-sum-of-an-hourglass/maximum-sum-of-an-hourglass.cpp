class Solution {
public:
    int maxSum(vector<vector<int>>& v) {
        int m=v.size();
        int n=v[0].size();
        int mx=0;
        for(int i=0;i<m-2;i++){
            for(int j=0;j<n-2;j++){
                int sum=v[i][j]+v[i][j+1]+v[i][j+2]+v[i+1][j+1]+v[i+2][j]+v[i+2][j+1]+v[i+2][j+2];
                mx=max(mx,sum);
            }
        }
        return mx;
    }
};