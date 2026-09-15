class Solution {
public:
    int findMin(vector<int>& v) {
        int i=0;
        int j=v.size()-1;
        int m=i+(j-i)/2;
        int ans=v[0];
        int n=v.size();
        while(i<=j){
           if(n==1){
                break;
           }
           else if(n==2){
            ans=min(v[0],v[1]);
            break;
           }
           else if(v[n-1]<v[0] and v[n-1]<v[n-2]){
            ans=v[n-1];
            break;
           }
           else if(v[0]<v[1] and v[0]<v[n-1]){
            break;
           } 
           else{
            if(v[m-1]>v[m] and v[m]<v[m+1]){
                ans=v[m];
                break;
            }
            else if(v[m]>v[0]){
                i=m+1;
            
            }
            else{
                j=m;
            }
            m=i+(j-i)/2;
           }
        }
        return ans;
    }
};