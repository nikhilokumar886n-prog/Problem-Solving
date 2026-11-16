class Solution {
public:
    string stringHash(string v, int k) {
        string ans="";
        int n=v.size();
        int x=0;
        int r=k;
        for(int i=0;i<n;i++){
            if(r==0){
                ans+=(x%26)+'a';
                r=k;
                x=0;
            }
            x+=v[i]-'a';
            r--;
            cout<<x<<" ";
        }
        ans+=(x%26)+'a';
        return ans;
    }
};