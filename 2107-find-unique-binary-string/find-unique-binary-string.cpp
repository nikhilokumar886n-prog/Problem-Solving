class Solution {
public:
    string findDifferentBinaryString(vector<string>& v) {
        int n=v.size();
        string ans="";
        for(int i=0;i<n;i++){
            ans+='0';
        }
        int a=0;
        while(true){
            for(int i=0;i<n;i++){
                if(v[i]==ans){
                    break;
                }
                if(v[i]!=ans){
                    a++;
                }
            }
            cout<<a;
            if(a==n) return ans;
            ans[n-1]+=1;
            for(int i=n-1;i>0;i--){
                if(ans[i]=='2'){
                    ans[i]='0';
                    ans[i-1]+=1;
                }
            }
            a=0;
        }
        return ans;
        //2 loops
        //each time add '1' to ans
    }
};