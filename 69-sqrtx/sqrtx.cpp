class Solution {
public:
    int mySqrt(int n) {
        int i=0;
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
       return ans;
    }
};