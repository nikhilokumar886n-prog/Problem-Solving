class Solution {
public:
    long long dividePlayers(vector<int>& v) {
        long long ans=0;
        sort(v.begin(),v.end());
        int i=1;
        int j=v.size()-2;
        int t=v[0]+v[v.size()-1];
        while(i<j){
            if(v[i]+v[j]!=t){
                return -1;
            }
            i++,j--;
        }
        i=0,j=v.size()-1;
        while(i<j){
            ans+=v[i]*v[j];
            i++,j--;
        }
    return ans;
    }
};