class Solution {
public:
    int search(vector<int>&v, int t) {
        int i=0;
        int j=v.size()-1;
        int m=i+(j-i)/2;
        int ans=-1;
        while(i<=j){
            if(v[m]==t){
                ans=m;
                break;
            }
            else if(v[m]>t){
                j=m-1;
            }
            else{
                i=m+1;
            }
            m=i+(j-i)/2;
        }
        return ans;
    }
};