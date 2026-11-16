class Solution {
public:
    string digitSum(string v, int k) {
        if(v.size()<=k) return v;
        string ans=v;
        int a=0;
        while(ans.size()>k){
            if(a>0){
                 v=ans;
            }
            ans="";
            int r=k;
            int sum=0;
            for(int i=0;i<v.size();i++){
                if(r==0){
                    ans+=to_string(sum);
                    cout<<sum<<" ";
                    sum=0;
                    r=k;
                }
                sum+=v[i]-'0';
                r--;
            }
            ans+=to_string(sum);
            a++;
            cout<<endl;
        }
        return ans;
    }
};