class Solution {
public:
    string shiftingLetters(string s, vector<int>& v) {
        int n=v.size();
        if(n==1){
            s[0]=(s[0]-97+int(v[0]))%26+97;
            return s;
        }
        for(int i=0;i<n;i++){
            v[i]=v[i]%26;
        }
        for(int i=n-2;i>=0;i--){
            v[i]+=v[i+1];
        }
        for(int i=0;i<n;i++){
            s[i]=(s[i]-97+int(v[i]))%26+97;
        }
        // for(int i=0;i<n;i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        // for(int i=0;i<n;i++){
        //     cout<<s[i]<<" ";
        // }
        return s;
    }
};
// 'a' = 97
// 'z' = 122
// '0' = 48
// '9' = 57