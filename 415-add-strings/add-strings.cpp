class Solution {
public:
    string solve(string &a, string &b){
        int carry=0;
        int x=a.size();
        int y=b.size();
        for(int i=0;i<b.size();i++){
            int sum=(a[i]-'0')+(b[i]-'0')+carry;
            if(sum>=10){
                sum=sum-10;
                carry=1;
                a[i]=sum+'0';
            }
            else{
                carry=0;
                a[i]=sum+'0';
            }
        }
        for(int i=y;i<a.size();i++){
            int sum=(a[i]-'0')+carry;
            if(sum>=10){
                sum=sum-10;
                carry=1;
                a[i]=sum+'0';
            }
            else{
                carry=0;
                a[i]=sum+'0';
            }
        }
        if(carry==1){
            a=a+"1";
        }
        reverse(a.begin(),a.end());
        return a;
    }
    string addStrings(string a, string b) {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        
        if(a.size()>b.size()){
            return solve(a,b);
        }
        else{
            return solve(b,a);
        }
    }
};