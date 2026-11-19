class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& v, int k) {
        sort(v.begin(),v.end());
        int n=v.size();
        int m=n/3;
        vector<vector<int>> r(0, vector<int>(0));
        int x=0;
        vector<vector<int>> ans(m, vector<int>(3));
        for(int i=0;i<n;i=i+3){
            if((v[i+2]-v[i+1])<=k and (v[i+1]-v[i])<=k and (v[i+2]-v[i])<=k){
                ans[x][0]=v[i];
                ans[x][1]=v[i+1];
                ans[x][2]=v[i+2];
                x++;
            }
            else{
                return r;
            }
        }
        return ans;
    }
};