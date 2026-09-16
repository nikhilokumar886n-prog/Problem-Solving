class Solution {
public:
    int searchInsert(vector<int>& v, int t) {
        int n=v.size();
        if(t>v[n-1]){
            return n;
        }
        else if(t<v[0]){
            return 0;
        }
        int i=0;
        int j=n-1;
        int m=i+(j-1)/2;
        while(i<=j){
            if(v[m]==t){
                return m;
            }
            else if(v[m]>t){
                j=m-1;
            }
            else{
                if(t<v[m+1]){
                    return m+1;
                }
                i=m+1;
            }
            m=i+(j-i)/2;
        }
        return 1;
    }
};