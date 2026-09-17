class Solution {
public:
    int lef(vector<int>&v,int t){
        int left=-1;
        int i=0;
        int j=v.size()-1;
        int mid=i+(j-i)/2;
        while(i<=j){
            if(v[mid]==t){
                left=mid;
                j=mid-1;
            }
            else if(v[mid]>t){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
            mid=i+(j-i)/2;
        }
        return left;
    }
    int rig(vector<int>&v,int t){
        int right=-1;
        int i=0;
        int j=v.size()-1;
        int mid=i+(j-i)/2;
        while(i<=j){
            if(v[mid]==t){
                right=mid;
                i=mid+1;
            }
            else if(v[mid]>t){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
            mid=i+(j-i)/2;
        }
        return right;
    }
    vector<int> searchRange(vector<int>& v, int t) {
        int left=lef(v,t);
        int right=rig(v,t);

    vector<int>ans(2,0);
    ans[0]=left;
    ans[1]=right;
    return ans;
    }
};