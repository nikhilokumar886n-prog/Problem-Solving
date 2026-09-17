class Solution {
public:
    bool isPerfectSquare(int n) {
        int i=1;
        int j=n;
        int ans=0;
        long  long m=i+(j-i)/2;
        while(i<=j){
            if(m*m<=n){
                ans=m;
                i=m+1;
            }
            else{
                j=m-1;
            }
            m=i+(j-i)/2;
        }
        if(ans*ans==n){
            return true;
        }
        else {
            return false;
        }
    }
};