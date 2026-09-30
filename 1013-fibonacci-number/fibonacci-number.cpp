class Solution {
public:
    int fib(int n) {
        if(n==0){
            return 0;
        }
        if(n==1 or n==2){
            return 1;
        }
        int a=0;
        int b=1;
        int c=a+b;
        int x=2;
        while(x<n){
            a=b;
            b=c;
            c=a+b;
            x++;
        }
        return c;
    }
};