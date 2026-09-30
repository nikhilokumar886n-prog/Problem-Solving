class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int left=max(ax1,bx1);
        int right=min(ax2,bx2);
        int top=min(ay2,by2);
        int bottom=max(ay1,by1);

        int c=0;
        if(left>=right || bottom>=top){
            c=0;
        }
        else{
            c=(top-bottom)*(right-left);
        }
        int a=(ax2-ax1)*(ay2-ay1);
        int b=(bx2-bx1)*(by2-by1);
        return a+b-c;
    }
};
//left,right,top,bottom
//a1+a2-common