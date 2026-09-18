class Solution {
    double p(double x,int n){
        if(n==1){
            return x;
        }
        if(n%2==0){
            double h=p(x,n/2);
            return h*h;
        }
        else{
            double q=p(x,(n-1)/2);
            return x*q*q;
        }
    }
public:
    double myPow(double x, int n) {
        if(x==1 or x==0 or n==1){
                return x;
        }
        if(n==0){
            return 1;
        }
        int a=1;
        if(n==INT_MIN){
            a=-2;
            n=n+1;
            n=-1*n;
        }
        if(n<0){
            a=-1;
            n=-1 * n;
        }


        if(a==1){
            return p(x,n);
        }
        else if(a==-1){
            double ans=p(x,n);
            return 1/ans;
        }
        else if(a==-2){
            double ans=p(x,n);
            ans=ans/x;
            return 1/ans;
        }
        return 0;
    }
};