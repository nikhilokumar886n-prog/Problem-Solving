class Solution {
public:
    int duplicateNumbersXOR(vector<int>& v) {
        int n=v.size();
        int ans=0;
        sort(v.begin(),v.end());
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                ans=ans^v[i];
                i=i+1;
            }
        }
        return ans;
    }
};