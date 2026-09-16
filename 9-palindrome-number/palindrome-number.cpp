class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int n=x;
        int a=0;
        while(x>0){
           a++;
           x=x/10; 
        }
        if(n==0 or a==1){
            return true;
        }
        int b=1;
        while(a>b){
            int p=n/pow(10,a-1);
            int r=p%10;
            int m=pow(10,b);
            int q=n%m;
            int s=q/pow(10,b-1);
            

            if(r==s){
                a--;
                b++;
            }
            else{
                return false;
            }
        }
        
        return true;
        
    }
};
