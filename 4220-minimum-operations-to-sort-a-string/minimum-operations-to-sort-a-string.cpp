class Solution {
public:
    int minOperations(string s) {
        int n=s.size();
        if(n==1){
            return 0;
        }
        int a=0; //0
        char b=s[0],c=s[n-1]; //1,2
        int e=0,d=0; //3
        //0 sorted
        for(int i=0;i<n-1;i++){
            if(s[i]<=s[i+1]){
                a++;
            }
            if(s[i]>c){
                c=s[i];
            }
            if(s[i+1]<b){
                b=s[i+1];
            }
        }
        for(int i=0;i<n;i++){
            if(s[i]==c){
                d++;
            }
            if(s[i]==b){
                e++;
            }
        }
        //0 sorted
        if(a==n-1){
            return 0;
        }
        //-1 ele and s[0]>s[1]
        if(n==2 and s[0]>s[1]){
            return -1;
        }
         //1 1st or last ele sorted
        if(b==s[0] or c==s[n-1]){
            cout<<b<<c;
            return 1;
        }
        //3 1st ele is largest and last si smallest (gff)?
        if(b==s[n-1] and c==s[0] and d==1 and e==1){
            return 3;
        }

        //2 1 st and last ele niddle ele
        if(b!=s[0] and c!=s[n-1]){
            return 2;
        }
    return 3;
    }
};