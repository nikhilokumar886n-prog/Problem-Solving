class Solution {
public:
    bool validSquare(vector<int>& a, vector<int>& b, vector<int>& c,vector<int>& d) {
        vector<long>ans(6, 0);
        ans[0] = pow((a[0]-b[0]),2) + pow((a[1]-b[1]),2);
        ans[1] = pow((a[0]-c[0]),2) + pow((a[1]-c[1]),2);
        ans[2] = pow((a[0]-d[0]),2) + pow((a[1]-d[1]),2);
        ans[3] = pow((b[0]-c[0]),2) + pow((b[1]-c[1]),2);
        ans[4] = pow((b[0]-d[0]),2) + pow((b[1]-d[1]),2);
        ans[5] = pow((c[0]-d[0]),2) + pow((c[1]-d[1]),2);
        sort(ans.begin(),ans.end());
        long long p=ans[0];
        long long q=ans[4];
        if(ans[1]==p and ans[2]==p and ans[3]==p and ans[5]==q and p!=q){
            return 1;
        }
        return 0;
    }
};