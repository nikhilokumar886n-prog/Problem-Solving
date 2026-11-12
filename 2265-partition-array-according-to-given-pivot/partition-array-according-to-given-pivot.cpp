class Solution {
public:
    vector<int> pivotArray(vector<int>& v, int p) {
        vector<int>ans;
        int n=v.size();
        for(int i=0;i<n;i++){
            if(v[i]<p){
                ans.push_back(v[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]==p){
                ans.push_back(v[i]);
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]>p){
                ans.push_back(v[i]);
            }
        }
        return ans;
    }
};