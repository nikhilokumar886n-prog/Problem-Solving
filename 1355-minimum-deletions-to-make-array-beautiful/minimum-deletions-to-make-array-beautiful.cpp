class Solution {
public:
    int minDeletion(vector<int>& v) {
        int m=0;
        int n=v.size();
        stack<int>s;
        bool eindex=true;
       for(int i=0;i<n;i++){
        if(eindex==true){
            s.push(v[i]);
            m++;
            eindex=false;
        }
        else{
            if(v[i]!=s.top()){
                s.push(v[i]);
                m++;
                eindex=true;
            }
        }
       }
       if(m%2==1){
        m=m-1;
       }
       return n-m;
    }
};