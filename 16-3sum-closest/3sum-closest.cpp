class Solution {
public:
    int threeSumClosest(vector<int>& v, int t) {
        int n=v.size();
        sort(v.begin(),v.end());
        int a=INT_MIN;
        int b=INT_MAX;
        for(int i=0;i<n;i++){
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=v[i]+v[j]+v[k];
                if(sum==t){
                    return t;
                }
                if(a<=sum and sum<=t){
                    a=sum;
                    j++;
                }
                else if(t<=sum and sum<=b){
                    b=sum;
                    k--;
                }
                else if(sum>b){
                    k--;
                }
                else if(sum<a){
                    j++;
                }
            }
        }
        if(a==INT_MIN){
            return b;
        }
        else if(b==INT_MAX){
            return a;
        }
        long x=abs(t-a);
        long y=abs(t-b);
        if(x<y){
            return a;
        }
        return b;
    }
};