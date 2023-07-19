/*Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.*/

// Solution:

/*
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i=0,j=-1;
        for(i=0;i<n;i++){
            if(nums[i]==0){
                j=i;
                break;
            }
        }
        
        if(j==-1){
            return;
        }

        for(i=j+1;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[j]);
                j++;
            }
        }
    }
};
*/