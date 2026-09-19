class Solution {
public:
    int myAtoi(string s) {
        int n=s.size();
        int ans=0;
        int j=0;
        for(int i=0;i<n;i++){
            if(s[i]!=' '){
                j=i;
                break;
            }
        }
        int a=0;
        if(s[j]=='-'){
            a=-1;
            j++;
        }
        else if(s[j]=='+'){
            j++;
        }
        for(int i=j;i<n;i++){
            if(s[i]>=48 and s[i]<=57){
                int d=s[i]-'0';
                if(a<0){
                    if(ans<INT_MIN/10 or (ans==INT_MIN/10 and -d<=INT_MIN%10)){
                        ans=INT_MIN;
                        break;
                    }
                    ans=ans*10-d;
                }
                else{
                    if(ans>INT_MAX/10 or (ans==INT_MAX/10 and d>=INT_MAX%10)){
                        ans=INT_MAX;
                        break;
                    }
                    ans=ans*10+d;
                }
            }
            else{
                break;
            }
        }return ans;
    }
};