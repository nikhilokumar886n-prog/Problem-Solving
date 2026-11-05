class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int m=v.size();
        int n=v[0].size();
        vector<int>r;
         vector<int>c;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(v[i][j]==0){
                    r.push_back(i);
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[j][i]==0){
                    c.push_back(i);
                    break;
                }
            }
        }
        int a=0;
        for(int i=0;i<m;i++){
            if(a==r.size()){
                break;
            }
            if(i==r[a]){
                for(int j=0;j<n;j++){
                    v[i][j]=0;
                }
                a++;
            }
        }
        a=0;
        for(int i=0;i<n;i++){
            if(a==c.size()){
                break;
            }
            if(i==c[a]){
                for(int j=0;j<m;j++){
                    v[j][i]=0;
                }
                a++;
            }
        }
    }
};