class Solution {
public:
    int maxDepth(string s) {
        int mx=0;
        int curr=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                curr++;
                mx=max(curr,mx);
            }
            else if(s[i]==')'){
                curr--;
            }
        }
        return mx;
    }
};