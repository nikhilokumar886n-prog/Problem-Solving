class Solution {
public:
    string interpret(string v) {
        string ans="";
        for(int i=0;i<v.size();i++){
            if(v[i]=='G'){
                ans=ans+'G';
            }
            else if(v[i]=='(' and v[i+1]==')'){
                ans+='o';
                i++;
            }
            else{
                ans+='a';
                ans+='l';
                i+=3;
            }
        }
        return ans;
    }
};