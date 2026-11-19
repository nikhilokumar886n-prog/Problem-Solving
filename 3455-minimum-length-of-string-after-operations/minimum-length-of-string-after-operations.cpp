class Solution {
public:
    int minimumLength(string v) {
        int n=v.size();
        vector<int>f(26,0);
        for(int i=0;i<n;i++){
            f[v[i]-'a']++;
        }
        int ans=0;
        for(int i=0;i<26;i++){
            if(f[i]==0){
                f[i]=0;
            }
            else if(f[i]%2==0){
                f[i]=2;
                ans=ans+2;
            }
            else{
                f[i]==1;
                ans++;
            }
        }
        return ans;
    }
};