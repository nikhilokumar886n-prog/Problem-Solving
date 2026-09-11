class Solution {
public:
    int reverse(int x) {
        int a=0;
        if(x<0){
            a=1;
        }
        int ans=0;
       if(x>0){
         while(x>0){
            int last=x%10;
            if(ans>INT_MAX/10){
                a=-1;
                break;
            }
            ans=ans*10+last;
            x=x/10;
        }
       }
       else if(x<0){
         while(x<0){
            int last=x%10;
            if(ans<INT_MIN/10){
                a=-1;
                break;
            }
            ans=ans*10+last;
            x=x/10;
        }
       }
        if(a==1){
            ans=ans;
        }
        else if(a==-1){
            ans=0;
        }
        return ans;
    }
};