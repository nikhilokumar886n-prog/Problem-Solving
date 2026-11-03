class Solution {
public:
    int removeDuplicates(vector<int>& v) {
        int n=v.size();
        if(n==1 or n==2){
            return n;
        }
        int i=0;
        int j=1;
        int k=0;
        while(i<n and j<n){
            if(v[i]==v[j]){
                k++;
                if(k>1){
                    v[j]=100000;
                    k--;
                }
                j++;
            }
            else{
                i=j;
                j=i+1;
                k=0;
            }
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0;i<n;i++){
            if(v[i]<100000){
                ans++;
            }
        }
        cout<<ans;
        return ans;
        
    }
};