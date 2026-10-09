class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n>=0 and n<=9){
            return n*n;
        }
        string s=to_string(n);
        string u="";
        for(int i=0;i<s.length();i++){
            if(s[i]!='0'){
                u+=s[i];
            }
        }
        int sum=0;
        for(int i=0;i<u.length();i++){
            sum+=u[i]-'0';
        }
        long x=stoi(u);
        x=x*sum;
        return x;
    }
};