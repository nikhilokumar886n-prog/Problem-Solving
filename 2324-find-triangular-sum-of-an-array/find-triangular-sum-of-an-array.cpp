class Solution {
public:
    int triangularSum(vector<int>& v) {
        int x=v.size();
        int n=x;
        int r=1;
        while(x>0){
            for(int i=n-1;i>=r;i--){
                v[i]+=v[i-1];
                v[i]%=10;
            }
            r++;
            x--;
        }
        return v[n-1];
    }
};