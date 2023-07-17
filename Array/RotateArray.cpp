/*Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.*/

// Solution:

/*
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        if(k==0 || n==0 || n==1){
            return;
        }
        
        //storing the elements in temp array 
        int temp[k];
        int j = 0;
        for(int i = n-k; i < n; i++){
            temp[j] = nums[i];
            j++;
        }
        
        //shifting the elements
        for(int i = n-1; i >= k; i--){
            nums[i]=nums[i-k];
        }

        //restoring the array from temp array
        for(int i = 0; i < k; i++){
            nums[i]=temp[i];
        }
    }
};
*/