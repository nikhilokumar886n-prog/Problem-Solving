class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        if(nums.size()>=1){
            int i=0;
            int j=1;
            while(j<nums.size()){
                if(nums[i]==0 and nums[j]!=0){
                    swap(nums[i],nums[j]);
                    i++;
                    j++;
                }
                else if(nums[i]==0 and nums[i]==0){
                    j++;
                }
                else{
                    i++;
                    j++;
                }
            }
        }
    }
};


// void moveZeroes(vector<int>& nums) {
//     int nonZero = 0;

//     for (int j = 0; j < nums.size(); j++) {
//         if (nums[j] != 0) {
//             swap(nums[j], nums[nonZero]);
//             nonZero++;
//         }
//     }
// }