class Solution {
public:
    string arrangeWords(string v) {
       vector<pair<int,string> > m;
       v[0]=v[0]-'A'+'a';
        string s="";
        int x=0;
        for(int i=0;i<v.size();i++){
            if(v[i]!=' '){
                s+=v[i];
            }
            else{
                x=s.size();
                m.push_back({x,s});
                s="";
            }
        }
        x=s.size();
        m.push_back({x,s});

        stable_sort(m.begin(),m.end(),[](const auto &a,const auto &b) {
            return a.first < b.first;
        });

        s="";
        for(const auto &r:m) {
            s += r.second;
            s += ' ';
        }
        s.pop_back();
        s[0]=s[0]-'a'+'A';
        return s;


    }
};