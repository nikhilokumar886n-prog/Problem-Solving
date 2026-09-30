class Solution {
public:
    vector<int> findDuplicates(vector<int>& v) {
        sort(v.begin(),v.end());
        vector<int>ans;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]){
                ans.push_back(v[i]);
                i++;
            }
        }
        return ans;
    }
};