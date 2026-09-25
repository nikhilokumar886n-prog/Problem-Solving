class Solution {
public:
    vector<int> singleNumber(vector<int>& v) {
        sort(v.begin(),v.end());
        vector<int>ans(2,0);
        int a=0;
        for(int i=0;i<v.size()-1;i++){
            if(v[i]==v[i+1]){
                i=i+1;
            }
            else{
                ans[a]=v[i];
                a++;
                if(a==2){
                    break;
                }
                
            }
        }
        if(a==1){
            ans[1]=v[v.size()-1];
        }
        return ans;
    }
};