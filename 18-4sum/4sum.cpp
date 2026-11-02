class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& v, int t) {
        //sort
        sort(v.begin(),v.end());
        vector<int>c(4,0);
        vector<vector<int>>ans;
        int n=v.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int a=j+1;
                int b=n-1;
                while(a<b){
                    long long sum=1LL *v[a]+v[b]+v[i]+v[j];
                    if(sum==t){
                        c[0]=v[i],c[1]=v[j],c[2]=v[a],c[3]=v[b];
                        ans.push_back(c);
                        a++;
                        b--;
                    }
                    else if(sum>t){
                        b--;
                    }
                    else{
                        a++;
                    }
                }
            }
        }
        for(auto &x:ans){
            sort(x.begin(),x.end());
        }
        sort(ans.begin(),ans.end());
        if(ans.size()==0){
            return {};
        }
        if(ans.size()==1){
            return ans;
        }
        vector<vector<int>>final;
        final.push_back(ans[0]);
        int i=0;
        int j=1;
        while(i<ans.size() and j<ans.size()){
            if(ans[i]==ans[j]){
                j++;
            }
            else{
                final.push_back(ans[j]);
                i=j;
                j=i+1;
            }
        }
        return final;
    }
};