class Solution {
public:
    int maxVowels(string v, int k) {
        int ans=0;
        int n=v.size();
        int x=0;
        for(int i=0;i<k;i++){
            if(v[i]=='a' or v[i]=='e' or v[i]=='i' or v[i]=='o' or v[i]=='u'){
                x++;
            }
        }
        ans=max(ans,x);
        int i=0;
        while(i<n-k){
            if(v[i]=='a' or v[i]=='e' or v[i]=='i' or v[i]=='o' or v[i]=='u'){
                x--;
            }
            if(v[i+k]=='a' or v[i+k]=='e' or v[i+k]=='i' or v[i+k]=='o' or v[i+k]=='u'){
                x++;
            }
            ans=max(ans,x);
            i++;
        }
        return ans;
    }
};
//sw