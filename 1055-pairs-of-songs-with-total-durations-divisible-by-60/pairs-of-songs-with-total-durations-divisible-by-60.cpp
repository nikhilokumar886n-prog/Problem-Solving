class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& v) {
        int n=v.size();

        vector<int> a(60,0);

        for(int i=0;i<n;i++) {
            v[i] %= 60;
            a[v[i]]++;
        }

        long long ans=0;

        ans += 1LL*a[0]*(a[0]-1)/2;
        ans += 1LL*a[30]*(a[30]-1)/2;

        for(int i=1;i<30;i++) {
            ans += 1LL*a[i]*a[60-i];
        }

        return ans;
    }
};