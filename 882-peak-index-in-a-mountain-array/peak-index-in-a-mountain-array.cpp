class Solution {
public:
    int peakIndexInMountainArray(vector<int>& v) {
        int i=0;
        int j=v.size()-1;
        int mid=i+(j-i)/2;
        int ans=-1;
        while(i<=j){
            if(i==j){
                ans=i;
                break;
            }
            if(mid==0){
                ans=j;
                break;
            }
            
            if(v[mid-1]<v[mid] and v[mid]>v[mid+1] and mid!=0){
                ans=mid;
                break;
            }
            else if(v[mid]>v[mid+1]){
                j=mid-1;
            }
            else{
                i=mid+1;
            }
            mid=i+(j-i)/2;
        }
        return ans;
    }
};