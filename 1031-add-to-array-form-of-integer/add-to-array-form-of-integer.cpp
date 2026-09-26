class Solution {
public:
    vector<int> addToArrayForm(vector<int>& v, int x) {
        reverse(v.begin(),v.end());
        int a=0;
        int k=x;
        while(k>0){
            k=k/10;
            a++;
        }
        int n=v.size();
        int p=0;
        while(a>n){
            n++;
            p++;
        }
        for(int i=0;i<p;i++){
            v.push_back(0);
        }
        int i=0;
        while(x>0){
            v[i]=v[i]+x%10;
            x=x/10;
            i++;
        }
        for(int i=0;i<v.size()-1;i++){
            if(v[i]>=10){
                v[i]-=10;
                v[i+1]++;
            }
        }
        if(v[v.size()-1]>=10){
            v[v.size()-1]-=10;
            v.push_back(1);
        }
        reverse(v.begin(),v.end());
        return v;
    }
};