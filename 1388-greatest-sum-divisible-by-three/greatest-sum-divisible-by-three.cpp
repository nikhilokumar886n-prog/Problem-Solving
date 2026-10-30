class Solution {
public:
    int maxSumDivThree(vector<int>& v) {
         long sum=0;
         sort(v.begin(),v.end());
        vector<int>a(2,100000);
        vector<int>b(2,100000);
        int x=0;
        int y=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
            if(x==0 and v[i]%3==1){
                a[0]=v[i];
                x++;
            }
            else if(x==1 and v[i]%3==1){
                a[1]=v[i];
                x++;
            }
            else if(v[i]%3==2 and y==0){
                b[0]=v[i];
                y++;
            }
            else if(v[i]%3==2 and y==1){
                b[1]=v[i];
                y++;
            }
        }
        cout<<sum<<endl<<a[0]<<","<<a[1]<<endl<<b[0]<<","<<b[1]<<endl;
         if(sum%3==1){
            sum=sum-min(a[0],b[0]+b[1]);
        }
        else if(sum%3==2){
            sum=sum-min(a[0]+a[1],b[0]);
        }
        int ans=int(sum);
        return ans;
    }
};