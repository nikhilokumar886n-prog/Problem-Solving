class Solution {
public:
    int minSteps(string s, string t) {
        int n=s.size();
        vector<int>a(26,0);
        vector<int>b(26,0);
        for(int i=0;i<n;i++){
            a[s[i]-'a']++;
        }
        for(int i=0;i<n;i++){
            b[t[i]-'a']++;
        }
        int sum=0;
        for(int i=0;i<26;i++){
            sum+=abs(a[i]-b[i]);
        }
        return sum/2;

        //comare fre and return sum/2
    }
};