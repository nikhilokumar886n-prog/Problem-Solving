class Solution {
public:
    int firstCompleteIndex(vector<int>& a, vector<vector<int>>& v) {
        int m=v.size();
        int n=v[0].size();
        vector<int>pos(a.size()+1,0);
        cout<<pos.size();
        for(int i=0;i<pos.size()-1;i++){
            pos[a[i]]=i;
        }  //pos[1] to last pos[v.size()] filled
        int ans=INT_MAX;
        for(int i=0;i<m;i++){
            int mx=0;
            for(int j=0;j<n;j++){
                if(pos[v[i][j]]>mx){
                    mx=pos[v[i][j]];
                }
            }
            ans=min(ans,mx);
        }
        for(int i=0;i<n;i++){
            int mx=0;
            for(int j=0;j<m;j++){
                if(pos[v[j][i]]>mx){
                    mx=pos[v[j][i]];
                }
            }
            ans=min(ans,mx);
        }
        return ans;
    }
};