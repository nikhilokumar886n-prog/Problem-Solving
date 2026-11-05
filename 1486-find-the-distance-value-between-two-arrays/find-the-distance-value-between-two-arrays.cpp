class Solution {
public:
    int findTheDistanceValue(vector<int>& a, vector<int>& b, int d) {
        int m=a.size();
        int n=b.size();
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(abs(a[i]-b[j])<=d){
                    ans++;
                    break;
                }
            }
        }
        return m-ans;
    }
};