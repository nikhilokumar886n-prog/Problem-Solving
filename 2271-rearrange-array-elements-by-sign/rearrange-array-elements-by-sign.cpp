class Solution {
public:
    vector<int> rearrangeArray(vector<int>& v) {
        int a=0,b=1;
        int n=v.size();
        vector<int>ans(n,0);
        for(int i=0;i<n;i++){
            if(v[i]>0){
                ans[a]=v[i];
                a=a+2;
            }
            else if(v[i]<0){
                ans[b]=v[i];
                b=b+2;
            }
        }
        return ans;
    }
};