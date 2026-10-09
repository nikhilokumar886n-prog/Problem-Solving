class Solution {
public:
    int minimumRecolors(string v, int k) {
        int ans=INT_MAX;
        int n=v.size();
        int x=0;
        for(int i=0;i<k;i++){
            if(v[i]=='W'){
                x++;
            }
        }
        ans=min(ans,x);
        int i=0;
        while(i<n-k){
            if(v[i]=='W'){
                x--;
            }
            if(v[i+k]=='W'){
                x++;
            }
            ans=min(ans,x);
             i++;
        }
        return ans;
    }
};