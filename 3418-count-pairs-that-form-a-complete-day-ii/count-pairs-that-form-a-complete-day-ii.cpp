class Solution {
public:
    long long countCompleteDayPairs(vector<int>& v) {
        int n=v.size();
        for(int i=0;i<n;i++){
            v[i]=v[i]%24;
        }
        int zero=0;
        sort(v.begin(),v.end());
    
        vector<int>a(24,0);
        for(int i=0;i<n;i++) {
            a[v[i]]++;
        }
        
        long long ans = 0;

        ans += 1LL * a[0] * (a[0]-1) / 2;
        ans += 1LL * a[12] * (a[12]-1) / 2;

        for(int i=1;i<12;i++) {
            ans += 1LL * a[i] * a[24-i];
        }
        return ans;

    }
};