class Solution {
public:
    vector<int> plusOne(vector<int>& v) {
        reverse(v.begin(),v.end());
        v[0]+=1;
        int n=v.size();
        for(int i=0;i<n-1;i++){
            if(v[i]>=10){
                v[i]-=10;
                v[i+1]+=1;
            }
            else{
                break;
            }
        }
        if(v[n-1]>=10){
            v[n-1]-=10;
            v.push_back(1);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};