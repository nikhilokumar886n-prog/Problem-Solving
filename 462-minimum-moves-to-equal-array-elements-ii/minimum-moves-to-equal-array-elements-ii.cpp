class Solution {
public:
    int minMoves2(vector<int>&v) {
        sort(v.begin(),v.end());
        int n=v.size();
        if(n==1){
            return 0;
        }
        else if(n==2){
            return abs(v[0]-v[1]);
        }
        long x=0;
        long y=0;
        int a1=n/2;
        int a2=n/2+1;
        for(int i=0;i<n;i++){
            x+=abs(v[i]-v[a1]);
            y+=abs(v[i]-v[a2]);
        }
        return min(x,y);
    }
};