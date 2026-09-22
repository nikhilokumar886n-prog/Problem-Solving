class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        vector<string>v;
        string temp="";
        for(int i=0;i<n;i++){
            if(s[i]==' ' and temp==""){
                continue;
            }
            else if(s[i]!=' '){
                temp=temp+s[i];
            }
            else{
                v.push_back(temp);
                temp="";
            }
        }
        if(temp!=""){
            v.push_back(temp);
        }

        reverse(v.begin(),v.end());
        string ans="";        
        for(int i=0;i<v.size();i++){
            ans=ans+v[i];
            if(i!=v.size()-1){
                ans=ans+' ';
            }
        }
        return ans;
    }

};