class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();        
        vector<int>a(nums.size());
        for(int i=0;i<nums.size();i++){
           if(i<k){
                a[i]=nums[nums.size()-k+i];
           }
           else{
                a[i]=nums[i-k];
           }
        }
    for(int i=0;i<a.size();i++){
        nums[i]=a[i];
       }
    }
};
//two pointer