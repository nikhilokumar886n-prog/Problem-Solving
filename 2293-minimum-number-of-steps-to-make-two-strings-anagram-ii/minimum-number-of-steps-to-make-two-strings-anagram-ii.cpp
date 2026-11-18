class Solution {
public:
    int minSteps(string s, string t) {
        int m=s.size();
        int n=t.size();
        vector<int>a(26,0);
        vector<int>b(26,0);
        for(int i=0;i<m;i++){
            a[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            b[t[i]-'a']++;
        }
        int sum=0;
        for(int i=0;i<26;i++){
            sum+=abs(a[i]-b[i]);
        }
        return sum;

    }
};