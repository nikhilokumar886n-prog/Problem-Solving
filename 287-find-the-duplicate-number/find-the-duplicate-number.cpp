class Solution {
public:
    int findDuplicate(vector<int>& v) {
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]){
                ans= v[i];
                break;
            }
        }
        return ans;
    }
};
//freq
//sort + 2 pointer
//map