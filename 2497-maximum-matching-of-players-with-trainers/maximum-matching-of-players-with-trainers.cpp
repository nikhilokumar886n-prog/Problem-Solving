class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& a, vector<int>& b) {
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=a.size()-1;
        int j=b.size()-1;
        int ans=0;
        while(i>=0 and j>=0){
            if(a[i]<=b[j]){
                i--,j--,ans++;
            }
            else{
                i--;
            }
        }
        return ans;
    }
};