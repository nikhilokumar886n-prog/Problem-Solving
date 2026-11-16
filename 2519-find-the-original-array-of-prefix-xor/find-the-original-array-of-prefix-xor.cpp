class Solution {
public:
    vector<int> findArray(vector<int>& v) {
        vector<int>ans(v.size());
        ans[0]=v[0];
        for(int i=1;i<v.size();i++){
            ans[i]=abs(~(v[i]^v[i-1]))-1;
        }
        return ans;
    }
};