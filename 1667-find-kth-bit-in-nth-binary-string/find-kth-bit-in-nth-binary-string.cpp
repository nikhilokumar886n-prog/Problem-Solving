class Solution {
public:
    char findKthBit(int n, int k) {
        if(n==1) return '0';
        string ans="0";
        while(n>1){
            string temp=ans;
            reverse(temp.begin(),temp.end());
            for(int i=0;i<temp.size();i++){
                if(temp[i]=='0') temp[i]='1';
                else temp[i]='0';
            }
            ans+='1'+temp;
            n--;
        }
        cout<<ans;

        return ans[k-1];
    }
};