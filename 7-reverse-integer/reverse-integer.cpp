class Solution {
public:
    int reverse(int x) {
        int ans=0;
       if(x>0){
         while(x>0){
            int last=x%10;
            if(ans>INT_MAX/10){
                ans=0;
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
                ans=0;
                break;
            }
            ans=ans*10+last;
            x=x/10;
        }
       }
        return ans;
    }
};