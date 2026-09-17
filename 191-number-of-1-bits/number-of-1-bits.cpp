class Solution {
public:
    int hammingWeight(int n) {
        int ans=0;
        while(n>0){
            int b=n&1;
            if(b==1){
                ans=ans+1;
            }
            n=n/2;
        }
        return ans;
    }
};