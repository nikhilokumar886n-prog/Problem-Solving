class Solution {
public:
    bool isUgly(int n) {
        if(n<=0){
            return false;
        }
        int x=-1;
        while(n>0){
            if(n==1){
                return true;
            }
            if(n%2==0){
                n=n/2;
                x=0;
            }
            if(n%3==0){
                n=n/3;
                x=0;
            }
            if(n%5==0){
                n=n/5;
                x=0;
            }
            if(x==-1 and n!=1){
                return false;
            }
            x=-1;
        }
        return true;
    }
};