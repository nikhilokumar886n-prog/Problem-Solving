class Solution {
public:
    long long mx(long long x) {
        vector<int> b;
        while (x > 0) {
            int r = x % 10;
            b.push_back(r);
            x = x / 10;
        }
        sort(b.begin(), b.end());
        x = 0;
        for (int i = b.size() - 1; i >= 0; i--) {
            x = x * 10 + b[i];
        }
        return x;
    }
    long long maximizeSum(vector<int>& v, int k) {
        long long ans = 0;
        vector<pair<long long,int>>a;
        for (int i = 0; i < v.size(); i++) {
            long long x = mx(v[i]);
            pair<long long,int>p = make_pair(x-v[i],v[i]);
            a.push_back(p);
        }
        sort(a.begin(),a.end());
        for(int i=a.size()-1;i>=0;i--){
            if(k>0 and a[i].first>0){
                ans+=a[i].first+a[i].second;
                k--;
            }
            else{
                ans+=a[i].second;
            }
        }
        
        return ans;
    }
};
