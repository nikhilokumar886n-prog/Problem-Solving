class Solution {
public:
    int singleNumber(vector<int>& v) {
        sort(v.begin(),v.end());
        int ans=v[0];
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]){
                i=i+2;
            }
            else{
                ans=v[i];
                return ans;
                
            }
        }
        return v[v.size()-1];
    }
};
//try again but better