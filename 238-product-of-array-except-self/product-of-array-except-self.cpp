class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {
        int n=v.size();
        int a=0;
        long p=1;
        for(int i=0;i<v.size();i++){
            if(v[i]!=0){
                p=1L*p*v[i];
            }
            if(v[i]==0){
                a++;
            }
        }
        if(a==0){
            for(int i=0;i<n;i++){
                v[i]=p/v[i];
            }
        }
        else if(a==1){
            for(int i=0;i<n;i++){
                if(v[i]==0){
                    v[i]=p;
                }
                else{
                    v[i]=0;
                }
            }
        }
        else{
            for(int i=0;i<n;i++){
                v[i]=0;
            }
        }
        return v;
    }
};