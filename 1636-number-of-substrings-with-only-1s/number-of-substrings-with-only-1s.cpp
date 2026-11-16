class Solution {
public:
    int numSub(string v) {
        int n=v.size();
        long x=0;
        long ans=0;
        for(int i=0;i<n;i++){
            if(v[i]=='1'){
                x++;
            }
            else{
                ans+=(x*(x+1))/2;
                x=0;
            }
        }
        ans+=(x*(x+1))/2;
        return ans % 1000000007;
    }
};