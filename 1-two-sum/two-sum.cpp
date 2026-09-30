class Solution {
public:
    vector<int> twoSum(vector<int>& v, int t) {
        vector<int>ans(2);
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                if(v[i]+v[j]==t){
                    ans[0]=i;
                    ans[1]=j;
                    break;
                }
            }
        }
        return ans;
    }
};