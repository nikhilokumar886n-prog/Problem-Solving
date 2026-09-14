class Solution {
public:
    void sortColors(vector<int>& v) {
        int a=0,b=0,c=0;
        for(int i=0;i<v.size();i++){
            
            if(v[i]==0){
                a++;
            }
            else if(v[i]==1){
                b++;
            }
            else{
                c++;
            }
        }
        for(int i=0;i<v.size();i++){
            if(a>0){
                v[i]=0;
                a--;
            }
            else if(b>0){
                v[i]=1;
                b--;
            }
            else{
                v[i]=2;
            }
        }
    }
};