class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& v) {
        int m=v.size();
        int n=v[0].size();
        vector<vector<int> >ans(m,vector<int>(n,0));
        for(int i=0;i<m;i++){
            int one=0;
            int zero=0;
            for(int j=0;j<n;j++){
                // ans[]
                if(v[i][j]==0){
                    zero++;
                }
                else{
                    one++;
                }
            }
            int put=one-zero;
            for(int j=0;j<n;j++){
                ans[i][j]+=put;
            }
        }
        for(int i=0;i<n;i++){
            int one=0;
            int zero=0;
            for(int j=0;j<m;j++){
                if(v[j][i]==0){
                    zero++;
                }
                else{
                    one++;
                }
            }
            int put=one-zero;
            for(int j=0;j<m;j++){
                ans[j][i]+=put;
            }
        }
        return ans;
    }
};