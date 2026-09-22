class Solution {
public:
    int bitwiseComplement(int n) {
        vector<int>v(31,1);
        for(int i=1;i<31;i++){
            v[i]=v[i-1]*v[i]*2;
        }
        if(n==0) return 1;
        if(n==1) return 0;
        if(n==2) return 1;
        int ans=0;
        for(int i=0;i<30;i++){
            if(n<v[i+1] and n>=v[i]){
                ans=v[i+1]-n-1;
            }
        }
        return ans;
    }
};