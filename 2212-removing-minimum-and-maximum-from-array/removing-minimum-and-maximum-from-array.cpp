class Solution {
public:
    int minimumDeletions(vector<int>& v) {
        int a=INT_MAX;
        int b=INT_MIN;
        int c=0,d=0;
        int n=v.size();
        for(int i=0;i<v.size();i++){
            if(v[i]>b){
                b=v[i];
                d=i;
            }
            if(v[i]<a){
                a=v[i];
                c=i;
            }
        }
        if(c>d){
            swap(c,d);
        }
        int x=(c+1)+(n-1-d+1);
        int y=(d+1);
        int z=(n-1-c+1);
        return min(x,min(y,z));
    }
};