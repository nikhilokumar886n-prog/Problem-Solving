class Solution {
public:
    int countPairs(vector<int>& v, int t) {
        int a=0;
        for(int i=0;i<v.size();i++){
            for(int j=i+1;j<v.size();j++){
                if(v[i]+v[j]<t){
                    a++;
                }
            }
        }
        return a;
    }
};