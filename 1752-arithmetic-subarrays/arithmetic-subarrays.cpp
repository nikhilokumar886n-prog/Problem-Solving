class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& v, vector<int>& l, vector<int>& r) {
        int n=v.size();
        int m=l.size();
        vector<bool>ans(m,true);
        for(int i=0;i<m;i++){
            if(r[i]-l[i]>=2){
                vector<int>use;
                for(int j=l[i];j<=r[i];j++){
                    use.push_back(v[j]);
                }
                sort(use.begin(),use.end());
                for(int j=0;j<use.size()-2;j++){
                    if(use[j+2]-use[j+1]!=use[j+1]-use[j]){
                        ans[i]=false;
                        break;
                    }
                }
            }
        }
        return ans;
    }
};