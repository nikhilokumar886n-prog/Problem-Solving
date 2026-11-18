class Solution {
public:
    int getKth(int lo, int hi, int k) {
        vector<pair<long,long> >p;
        long a=0;
        long r=0;
        for(int x=lo;x<=hi;x++){
            r=x;
            a=0;
            while(r!=1){
                if(r%2==0) r=r/2;
                else r=3*r+1;
                a++;
            }
            p.push_back({a,x});
        }
        sort(p.begin(),p.end());
        return p[k-1].second;
    }
};