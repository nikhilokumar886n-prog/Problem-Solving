class Solution {
public:
    int maxArea(vector<int>& v) {
        int i=0;
        int j=v.size()-1;
        int m=i+(j-1)/2;
        int mx=0;
        int ans=0;
        while(i<j){
            mx=(j-i)*(min(v[i],v[j]));
            ans=max(mx,ans);

            if(v[i]>=v[j]){
                j--;
            }
            else{
                i++;
            }
            
        }
        return ans;

    }
};