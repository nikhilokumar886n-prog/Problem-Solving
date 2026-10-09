class Solution {
public:
    double findMedianSortedArrays(vector<int>& a, vector<int>& b) {
        int n=a.size()+b.size();
        vector<int>v(n,0);
        int i=0;
        int j=0;
        int k=0;
        while(i<a.size() and j<b.size()){
            if(a[i]<=b[j]){
                v[k++]=a[i++];
            }
            else{
                v[k++]=b[j++];
            }
        }
        while(i<a.size()){
            v[k++]=a[i++];
        }
        while(j<b.size()){
            v[k++]=b[j++];
        }
        if(n%2==0){
            double x=v[n/2]+v[n/2 - 1];
            return x/2;
        }
        else{
            return v[n/2];
        }

    }
};