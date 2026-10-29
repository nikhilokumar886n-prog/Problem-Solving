class Solution {
public:
    vector<string> buildArray(vector<int>& v, int n) {
        int a=1;
        vector<string>ans;
        for(int i=0;i<v.size();i++){
            if(v[i]==a){
                ans.push_back("Push");
                a++;
            }
            else{
                while(v[i]!=a){
                    ans.push_back("Push");

                    ans.push_back("Pop");
                    a++;
                }
                a++;
                string x=to_string(i);
                
                ans.push_back("Push");
                // ans.push_back(x);
            }
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<",";
        }
        return ans;
    }
};