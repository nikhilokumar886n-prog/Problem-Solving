class Solution {
public:
    int minOperations(int n) {
        int x=n/2;
        if(n%2==0){
            return x*x;
        }
        else{
            return x*(x+1);
        }
    }
};
//1 3 5 7 9 11 13 -> 2+4+6
//1 3 5 7 9 11 -> 1+3+5
//1 3 5 7 9 -> 2+4