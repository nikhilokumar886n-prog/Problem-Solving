class Solution {
public:
    bool searchMatrix(vector<vector<int>>& v, int t) {
        int r=v.size()-1;
        int c=v[0].size()-1;
        int a=0;
        int b=c;
        while(a<=r and b>=0){
            int x=v[a][b];
            if(x==t){
                return true;
            }
            else if(x<t){
                a++;
            }
            else{
                b--;
            }
        }
        return false;
    }
};