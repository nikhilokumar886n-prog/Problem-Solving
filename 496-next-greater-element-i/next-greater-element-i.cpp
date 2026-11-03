class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& a, vector<int>& b) {
        int m=a.size();
        int n=b.size();
        vector<int>ans(m,-1);
        for(int i=0;i<m;i++){
            int x=0;
            for(int j=0;j<n;j++){
                if(a[i]==b[j]){
                    x=j;
                    break;
                }
            }
            for(int j=x+1;j<n;j++){
                if(b[j]>a[i]){
                    ans[i]=b[j];
                    break;
                }
            }
        }
        return ans;
    }
};