class Solution {
public:
    int findComplement(int n) {
        vector<long>v(32,1);
        for(int i=1;i<32;i++){
            v[i]=v[i-1]*v[i]*2;
        }
        if(n==0) return 1;
        if(n==1) return 0;
        if(n==2) return 1;
        int ans=0;
        for(int i=0;i<31;i++){
            if(n<v[i+1] and n>=v[i]){
                ans=v[i+1]-n-1;
            }
        }
        return ans;
        
    }
};