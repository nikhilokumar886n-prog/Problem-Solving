class Solution {
public:
    bool check(vector<int>& nums) {
        int j=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<=nums[i+1]){
                j++;
            }
        }
        if(nums[nums.size()-1]<=nums[0]){
            j+=1;
        }
        if(nums.size()==1){
            return true;
        }
        else if(j>=nums.size()-1){
            return true;
        }
        else{
            return false;
        }
    }
};