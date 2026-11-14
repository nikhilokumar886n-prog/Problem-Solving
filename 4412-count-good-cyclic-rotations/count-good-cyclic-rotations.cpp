class Solution {
public:
    int countGoodRotations(vector<int>& v) {
        int n=v.size();
        long a=0,b=0;
        long ba=0,ab=0;
        for(int i=0;i<n/2;i++){
            a+=v[i];
        }
        for(int i=n/2;i<n;i++){
            b+=v[i];
        }
        if(a>b) ab++;
        else if(b>a) ba++;

        int x=n/2;
        for(int i=x;i<n-1;i++){
            a=a+v[i]-v[i-x];
            b=b-v[i]+v[i-x];
            if(a>b) ab++;
            else if(b>a) ba++;
        }
        return ab+ba;
    }
};