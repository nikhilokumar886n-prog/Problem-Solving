class Solution {
public:
    bool judgeSquareSum(int c) {
        int j=sqrt(c);
        if(pow(j,2)==c){
            return true;
        }
        int i=1;
        while(i<=j){
            if((1L*(pow(i,2)+pow(j,2)))==c){
                return true;
            }
            else if((1L*(pow(i,2)+pow(j,2)))>c){
                j--;
            }
            else if((1L*(pow(i,2)+pow(j,2)))<c){
                i++;
            }
        }
        return false;
    }
};
//if c root exist done
