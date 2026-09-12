class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int t) {
        int l=0;
    int r=v.size()*v[0].size()-1;
    int mid=l+(r-l)/2;
    while(l<r){
        
        if(v[mid/v[0].size()][mid%v[0].size()]==t ){
            return 1;
        }
        else if(v[mid/v[0].size()][mid%v[0].size()]>t){
            r=mid;
        }
        else{
            l=mid+1;
        }
        mid=l+(r-l)/2;

    }
    if(l==r and v[l/v[0].size()][l%v[0].size()]==t ){
        return 1;
    }
    return 0;
    }
};
