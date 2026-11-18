class Solution {
public:
    long long minOperations(vector<int>& a, vector<int>& b, int k) {
        //just find the a(how much time less),b(how much is more)
        if(k==0 and a==b) return 0;
        if(k==0 and a!=b) return -1;

        int n=a.size();
        for(int i=0;i<n;i++){
            if(abs(a[i]-b[i])%k!=0){
                return -1;
            }
        }
        long long x=0,y=0;
        for(int i=0;i<n;i++){
            if(a[i]>b[i]){
                x+=(a[i]-b[i])/k;
            }
            else{
                y+=(b[i]-a[i])/k;
            }
        }
        if(x==y){
            return x;
        }
        else{
            return -1;
        }
    }
};