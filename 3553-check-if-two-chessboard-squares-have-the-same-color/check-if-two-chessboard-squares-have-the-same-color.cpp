class Solution {
public:
    bool checkTwoChessboards(string p, string q) {
        int a=p[0]%2+(p[1]-'0');
        int b=q[0]%2+(q[1]-'0');
    if(a%2==b%2){
        return true;
    }
    else{
        return false;
    }

    }
};