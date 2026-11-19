class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& v) {
        int n=v.size();
        vector<long long>ans(n,0);
        if(n==1){
            ans[0]=2*v[0];
            return ans;
        }
        int mx=v[0];
        for(int i=0;i<n;i++){
            if(v[i]>=mx){
                mx=v[i];
            }
            v[i]=v[i]+mx;
            ans[i]=v[i];
        }
        for(int i=1;i<n;i++){
            ans[i]=ans[i]+ans[i-1];
        }
        return ans;
    }
};