class Solution {
public:
    vector<int> Primes(vector<int>&v,int x) {
        int n=sqrt(x)+1;
        unordered_map<int,bool>m;
        for(int i=2;i<n;i++){
            m[i]=true;
        }
        for(int i=2;i<n;i++){
            if(m[i]==true){
                // ans++;
                for(int j=2*i;j<n;j=j+i){
                     m[j]=false;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(m[i]==true){
                if(1L*i*i<=pow(10,9)){
                    v.push_back(i*i);
                }
            }
        }
        return v;
    }
    int nonSpecialCount(int l, int r) {
        int ans=0;
        vector<int>v;
        Primes(v,r);
        for(int i=0;i<v.size();i++){
            if(v[i]>=l and v[i]<=r){
                ans++;
            }
        }

        return r-l+1-ans;
    }
};
//prime no. excluded
//if no. does not have a perfect root exclude
//if root is not prime exclude