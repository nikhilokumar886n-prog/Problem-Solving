class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        sort(v.begin(),v.end());
        int n=v.size();
        return v[n-k];
    }
};