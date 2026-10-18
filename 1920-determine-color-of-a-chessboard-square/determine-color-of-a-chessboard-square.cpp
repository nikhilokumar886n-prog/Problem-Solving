class Solution {
public:
    bool squareIsWhite(string p) {
        int a=p[0]%2+(p[1]-'0');
        if(a%2==1){
            return true;
        }
        else{
            return false;
        }
    }
};