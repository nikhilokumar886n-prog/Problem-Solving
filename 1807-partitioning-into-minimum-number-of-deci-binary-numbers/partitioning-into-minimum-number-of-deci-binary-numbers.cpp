class Solution {
public:
    int minPartitions(string s) {
        int mx=0;
        for(int i=0;i<s.size();i++){
            if(s[i]-'0'>mx){
                mx=s[i]-'0';
            }
            if(mx==9) break;
        }
        return mx;
    }
};
//the highest interger of string n is ans