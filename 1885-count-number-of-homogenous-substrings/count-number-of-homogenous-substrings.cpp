class Solution {
public:
    int countHomogenous(string v) {
        int n=v.size();
        long x=1;
        long ans=0;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                x++;
            }
            else{
                ans+=(x*(x+1))/2;
                x=1;
            }
        }
        ans+=(x*(x+1))/2;
        return ans % 1000000007;
    }
};