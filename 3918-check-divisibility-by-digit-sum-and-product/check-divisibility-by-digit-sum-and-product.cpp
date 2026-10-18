class Solution {
public:
    bool checkDivisibility(int n) {
        int x=n;
        int s=0;
        int p=1;
        while(x>0){
            int r=x%10;
            s=s+r;
            p=p*(r);
            x=x/10;
        }
        cout<<s<<" "<<p<<" ";
        s=s+p;
        cout<<s;
        if(n%s==0){
            return true;
        }
        else{
            return false;
        }
    }
};