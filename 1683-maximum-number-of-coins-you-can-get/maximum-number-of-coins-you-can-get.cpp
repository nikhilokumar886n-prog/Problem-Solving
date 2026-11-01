class Solution {
public:
    int maxCoins(vector<int>& v) {
        int ans=0;
        sort(v.begin(),v.end());
        int n=v.size();
        int k=n/3;
        for(int i=n-2;i>0;i=i-2){
            if(k>0){
                ans+=v[i];
                k--;
            }
        }
        return ans;
    }
};
//1 2 3 4 5 6 7 8 9