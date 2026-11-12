class Solution {
public:
    vector<int> majorityElement(vector<int>& v) {
        sort(v.begin(),v.end());
        vector<int>ans;
        map<int,int>m;
        int n=v.size();
        //ans.size=0,1,2
        for(int i=0;i<n;i++){
            if(m[v[i]]){
                m[v[i]]++;
            }
            else{
                m[v[i]]=1;
            }
        }
        int k=INT_MIN;
        for(int i=0;i<n;i++){
            if(m[v[i]]>n/3 and k!=v[i]){
                ans.push_back(v[i]);
                k=v[i];
            }
        }
        return ans;
    }
};