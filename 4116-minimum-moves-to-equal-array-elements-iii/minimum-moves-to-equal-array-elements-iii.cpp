class Solution {
public:
    int minMoves(vector<int>& v) {
        int m=0;
        for(int i=0;i<v.size();i++){
            if(m<v[i]){
                m=v[i];
            }
        }
        int ans=0;
        for(int i=0;i<v.size();i++){
            ans=ans+(m-v[i]);
        }
        return ans;
    }
};