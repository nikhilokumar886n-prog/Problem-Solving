class Solution {
public:
void mergesort(vector<int>& v,int l,int p,int r){
    int m=p-l+1;
    int n=r-p;
    vector<int>a(m,0);
    vector<int>b(n,0);
    for(int i=0;i<m;i++){
        a[i]=v[l+i];
    }
    for(int i=0;i<n;i++){
        b[i]=v[p+1+i];
    }
    int i=0,j=0,k=l;
    while(i<m and j<n){
        if(a[i]>b[j]){
            v[k++]=b[j++];
        }
        else{
            v[k++]=a[i++];
        }
    }
    while(j<n){    
        v[k++]=b[j++];
    }
    while(i<m){    
        v[k++]=a[i++];
    }
}
void merge(int l,vector<int>& v,int r){
    if(l>=r){
        return;
    }
    int m=l+(r-l)/2;
    merge(l,v,m);
    merge(m+1,v,r);
    mergesort(v,l,m,r);
}
    vector<int> sortArray(vector<int>& v) {
        int n=v.size();
         merge(0,v,n-1);
         return v;

    }
};