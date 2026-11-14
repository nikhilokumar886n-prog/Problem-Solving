class Solution {
public:
    int minPairSum(vector<int>& v) {
        sort(v.begin(),v.end());
        int mx=0;
        int i=0;
        int j=v.size()-1;
        while(i<j){
            mx=max(mx,v[i]+v[j]);
            i++,j--;
        }
        return mx;
    }
};