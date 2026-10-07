class Solution {
public:
    int check(vector<int>&v,int h,int m){
        long x=0;
        for(int i=0;i<v.size();i++){
            x=x+v[i]/m; 
            if(v[i]%m!=0){
                x=x+1;
            }      
        }
        if(x==h){
            return 0; //mid=ans or ans is smaller
        }
        else if(x>h){
            return -1; //ans is larger l=mid+1
        } 
        else if(x<h){
            return 1;//ans is smaller r=mid
        }
        return x;
    }
    int minEatingSpeed(vector<int>& v, int h) {
        int l=1;
        int r=0;
        int ans=0;
        for(int i=0;i<v.size();i++){
            r=max(r,v[i]);       
        }
        int mid=l+(r-l)/2;
        while(l<=r){
            
            int a=check(v,h,mid);
            cout<<mid<<","<<a<<" @ ";
            if(a==0){
                ans=mid;
                r=mid-1;
            }
            else if(a==1){
                ans=mid;
                r=mid-1;
            }
            else if(a==-1){
                l=mid+1;
            }
            mid=l+(r-l)/2;
        }
        return ans;
    }
};