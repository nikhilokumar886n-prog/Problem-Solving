class Solution {
public:
    bool backspaceCompare(string a, string b) {
        stack<char>p;
        for(int i=0;i<a.size();i++){
            if(a[i]!='#'){
                p.push(a[i]);
            }
            else{
                if(!p.empty()){
                    p.pop();
                }
            }
        }
        stack<char>q;
        for(int i=0;i<b.size();i++){
            if(b[i]!='#'){
                q.push(b[i]);
            }
            else{
                if(!q.empty()){
                    q.pop();
                }
            }
        }
        while(true){
            if(p.empty()==true and q.empty()==true){
                return true;
            }
            else if(p.empty()==false and q.empty()==false){
                char x=p.top();
                char y=q.top();
                if(x!=y){
                    return false;
                }
                p.pop();
                q.pop();
            }
            else{
                return false;
            }
        }
    }
};