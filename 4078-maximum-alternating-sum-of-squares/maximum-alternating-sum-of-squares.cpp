class Solution {
public:
    long long maxAlternatingSum(vector<int>& v) {
        int n=v.size();
        for(int i=0;i<n;i++){
            v[i]=abs(v[i]);
        }
        sort(v.begin(),v.end());
        int k=n/2;
        long long b=0;
        for(int i=k;i<n;i++){
            b=b+pow(v[i],2);
        }
        for(int i=0;i<k;i++){
            b=b-pow(v[i],2);
        }
        return b;
    }
};