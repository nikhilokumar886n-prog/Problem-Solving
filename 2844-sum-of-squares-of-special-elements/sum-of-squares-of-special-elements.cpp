class Solution {
public:
    int sumOfSquares(vector<int>&v) {
        vector<int>ans;
        int sum=0;
        int n=v.size();
        for(int i=0;i<n;i++){
            if(n%(i+1)==0){
                ans.push_back(v[i]);
            }
        }
        for(int i=0;i<ans.size();i++){
            sum+=ans[i]*ans[i];
        }
        return sum;
    }
};