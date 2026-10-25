class Solution {
public:
    string removeStars(string v) {
        stack<char>s;
        for(int i=0;i<v.size();i++){
            if(v[i]!='*'){
                s.push(v[i]);
            }
            else{
                s.pop();
            }
        }
        string ans="";
        while(!s.empty()){
            char a=s.top();
            ans+=a;
            s.pop();
        }
        int i=0;
        int j=ans.size()-1;
        while(i<j){
            swap(ans[i],ans[j]);
            i++;
            j--;
        }
        return ans;
    }
};