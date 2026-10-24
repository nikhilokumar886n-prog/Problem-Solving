class Solution {
public:
    int countDaysTogether(string aa, string ab, string ba, string bb) {
        vector<int>v={0,31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
        int a = ((aa[0]-'0')*10 + (aa[1]-'0'));
        int p = ((aa[3]-'0')*10 + (aa[4]-'0')) + v[a-1];

        int b = ((ab[0]-'0')*10 + (ab[1]-'0'));
        int q = ((ab[3]-'0')*10 + (ab[4]-'0')) + v[b-1];

        int c = ((ba[0]-'0')*10 + (ba[1]-'0'));
        int r = ((ba[3]-'0')*10 + (ba[4]-'0')) + v[c-1];

        int d = ((bb[0]-'0')*10 + (bb[1]-'0'));
        int s = ((bb[3]-'0')*10 + (bb[4]-'0')) + v[d-1];
        // not meet
        cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
        cout<<p<<" "<<q<<" "<<r<<" "<<s;
        if(q<r or p>s){
            return 0;
        }
        else{
            int ans=min(q,s)-max(p,r)+1;
            return ans;
        }
        return 0;
    }
};