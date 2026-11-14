class Solution {
public:
    bool canArrange(vector<int>& v, int k) {
        int n=v.size();
        int a=0,b=0;
        for(int i=0;i<v.size();i++){
            v[i]=(v[i]%k+k)%k;
            if(v[i]==0) a++;
        }
        sort(v.begin(),v.end());
        if(a%2==1) return false;
        int i=a;
        int j=n-1;
        while(i<j){
            if(v[i]+v[j]!=k) return false;
            i++,j--;
        }
        return true;
    }
};