class Solution {
public:
    string getSmallestString(int n, int k) {
        string s="";
        for(int i=0;i<n;i++){
            s+='a';
        }
        k=k-n;
        if(k==0) return s;
        for(int i=n-1;i>=0;i--){
            if(k==0){
                break;
            }
            if(k>=25){
                s[i]+=25;
                k=k-25;
            }
            else{
                s[i]+=k;
                k=0;
            }
        }
        return s;
    }
};